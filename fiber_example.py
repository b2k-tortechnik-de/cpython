
import opcode
import timeit
import types

YIELD_UP = opcode.opmap["YIELD_UP"]
UNARY_POSITIVE = opcode.opmap["UNARY_POSITIVE"]
BINARY_SUBSCR = opcode.opmap["BINARY_SUBSCR"]
EXCHANGE = opcode.opmap["EXCHANGE"]

def change_op(from_op, to_op):
    def convert(func):
        code = func.__code__.co_code
        for index, op in enumerate(code[::2]):
            if op == from_op:
                new_code = code[:index*2] + bytes([to_op]) + code[index*2+1:]
                func.__code__ = func.__code__.replace(co_code = new_code)
                break
        return func
    return convert

class Node:
    __slots__ = "left", "right", "value"

    def __init__(self, left, value, right):
        self.left = left
        self.value = value
        self.right = right

next_value = 0

def create_tree(depth):
    global next_value
    next_value += 1
    if depth > 1:
        return Node(create_tree(depth-1), next_value, create_tree(depth-1))
    else:
        return Node(None, next_value, None)

COUNT = 20

print("Creating tree")
TREE = create_tree(COUNT)
NODES = next_value
print(f"Created tree of {NODES} nodes")

def count(iterator):
    t = 0
    for _ in iterator:
        t += 1
    assert(t == NODES)

def walk(tree):
    if tree is None:
        return
    walk(tree.left)
    walk(tree.right)

def baseline(tree):
    walk(tree)
    for _ in range(NODES):
        yield tree

baseline = timeit.timeit("count(baseline(TREE))", globals=globals(), number=1)
print(f"Baseline: {baseline:.3f}s")


def gen_iter(tree):
    if tree is None:
        return
    yield from gen_iter(tree.left)
    yield tree
    yield from gen_iter(tree.right)

gen_time = timeit.timeit("count(gen_iter(TREE))", globals=globals(), number=1)
print(f"Generator time: {gen_time:.3f}s. Overhead: {gen_time-baseline:.3f}s")

@types.coroutine
def yieldUp(tree):
    yield tree

async def async_walk(tree):
    if tree is None:
        return
    await async_walk(tree.left)
    await yieldUp(tree)
    await async_walk(tree.right)

def async_iter(tree):
    tree_walker = async_walk(tree)
    try:
        while True:
            yield tree_walker.send(None)
    except StopIteration:
        pass

async_time = timeit.timeit("count(async_iter(TREE))", globals=globals(), number=1)
print(f"Async time: {async_time:.3f}s. Overhead: {async_time-baseline:.3f}s")

@change_op(UNARY_POSITIVE, YIELD_UP)
def yieldUp(arg):
    return +arg

@change_op(BINARY_SUBSCR, EXCHANGE)
def exchange(fiber, arg):
    return fiber[arg]

def walk(tree):
    if tree is None:
        return
    walk(tree.left)
    yieldUp(tree)
    walk(tree.right)

def fiber_iter(tree):
    tree_walker = Fiber(walk)
    try:
        yield tree_walker.start(tree)
        while True:
            yield tree_walker.send(None)
    except StopIteration:
        pass

fiber_time = timeit.timeit("count(fiber_iter(TREE))", globals=globals(), number=1)
print(f"Fiber time (library only): {fiber_time:.3f}s. Overhead: {fiber_time-baseline:.3f}s")

@change_op(UNARY_POSITIVE, YIELD_UP)
def walk(tree):
    if tree is None:
        return
    walk(tree.left)
    +tree
    walk(tree.right)

fiber_time = timeit.timeit("count(fiber_iter(TREE))", globals=globals(), number=1)
print(f"Fiber time (with custom syntax): {fiber_time:.3f}s. Overhead: {fiber_time-baseline:.3f}s")

#Time to create a Fiber. Create in batches of 100_000 to force realistic memory allocation.
print(f"Fiber creation: {timeit.timeit('[Fiber(walk) for _ in range(100_0000)]', globals=globals(), number=1):.1f}μs")

def test_throw(tree):
    tree_walker = Fiber(walk)
    node = tree_walker.start(tree)
    for _ in range(10000):
        tree_walker.send(None)
    try:
        tree_walker.throw(Exception)
    except Exception as ex:
        import traceback
        traceback.print_exc()

