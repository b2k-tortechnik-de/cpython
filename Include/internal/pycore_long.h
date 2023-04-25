#ifndef Py_INTERNAL_LONG_H
#define Py_INTERNAL_LONG_H
#ifdef __cplusplus
extern "C" {
#endif

#ifndef Py_BUILD_CORE
#  error "this header requires Py_BUILD_CORE define"
#endif

#include "pycore_global_objects.h"  // _PY_NSMALLNEGINTS
#include "pycore_runtime.h"       // _PyRuntime

/*
 * Default int base conversion size limitation: Denial of Service prevention.
 *
 * Chosen such that this isn't wildly slow on modern hardware and so that
 * everyone's existing deployed numpy test suite passes before
 * https://github.com/numpy/numpy/issues/22098 is widely available.
 *
 * $ python -m timeit -s 's = "1"*4300' 'int(s)'
 * 2000 loops, best of 5: 125 usec per loop
 * $ python -m timeit -s 's = "1"*4300; v = int(s)' 'str(v)'
 * 1000 loops, best of 5: 311 usec per loop
 * (zen2 cloud VM)
 *
 * 4300 decimal digits fits a ~14284 bit number.
 */
#define _PY_LONG_DEFAULT_MAX_STR_DIGITS 4300
/*
 * Threshold for max digits check.  For performance reasons int() and
 * int.__str__() don't checks values that are smaller than this
 * threshold.  Acts as a guaranteed minimum size limit for bignums that
 * applications can expect from CPython.
 *
 * % python -m timeit -s 's = "1"*640; v = int(s)' 'str(int(s))'
 * 20000 loops, best of 5: 12 usec per loop
 *
 * "640 digits should be enough for anyone." - gps
 * fits a ~2126 bit decimal number.
 */
#define _PY_LONG_MAX_STR_DIGITS_THRESHOLD 640

#if ((_PY_LONG_DEFAULT_MAX_STR_DIGITS != 0) && \
   (_PY_LONG_DEFAULT_MAX_STR_DIGITS < _PY_LONG_MAX_STR_DIGITS_THRESHOLD))
# error "_PY_LONG_DEFAULT_MAX_STR_DIGITS smaller than threshold."
#endif


/* runtime lifecycle */

extern PyStatus _PyLong_InitTypes(PyInterpreterState *);
extern void _PyLong_FiniTypes(PyInterpreterState *interp);


/* other API */

#define _PyLong_SMALL_INTS _Py_SINGLETON(small_ints)

// _PyLong_GetZero() and _PyLong_GetOne() must always be available
// _PyLong_FromUnsignedChar must always be available
#if _PY_NSMALLPOSINTS < 257
#  error "_PY_NSMALLPOSINTS must be greater than or equal to 257"
#endif

// Return a borrowed reference to the zero singleton.
// The function cannot return NULL.
static inline PyObject* _PyLong_GetZero(void)
{ return (PyObject *)&_PyLong_SMALL_INTS[_PY_NSMALLNEGINTS]; }

// Return a borrowed reference to the one singleton.
// The function cannot return NULL.
static inline PyObject* _PyLong_GetOne(void)
{ return (PyObject *)&_PyLong_SMALL_INTS[_PY_NSMALLNEGINTS+1]; }

static inline PyObject* _PyLong_FromUnsignedChar(unsigned char i)
{
    return Py_NewRef((PyObject *)&_PyLong_SMALL_INTS[_PY_NSMALLNEGINTS+i]);
}

PyObject *_PyLong_Add(PyLongObject *left, PyLongObject *right);
PyObject *_PyLong_Multiply(PyLongObject *left, PyLongObject *right);
PyObject *_PyLong_Subtract(PyLongObject *left, PyLongObject *right);

/* Used by Python/mystrtoul.c, _PyBytes_FromHex(),
   _PyBytes_DecodeEscape(), etc. */
PyAPI_DATA(unsigned char) _PyLong_DigitValue[256];

/* Format the object based on the format_spec, as defined in PEP 3101
   (Advanced String Formatting). */
PyAPI_FUNC(int) _PyLong_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);

PyAPI_FUNC(int) _PyLong_FormatWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    int base,
    int alternate);

PyAPI_FUNC(char*) _PyLong_FormatBytesWriter(
    _PyBytesWriter *writer,
    char *str,
    PyObject *obj,
    int base,
    int alternate);

/* Long value tag bits:
 * 0-1: Sign bits value = (1-sign), ie. negative=2, positive=0, zero=1.
 * 2: Reserved for immortality bit
 * 3+ Unsigned digit count
 */

#define SIGN_NEGATIVE 2
#define NON_SIZE_BITS 3

/* All *compact" values are guaranteed to fit into
 * a Py_ssize_t with at least one bit to spare.
 * In other words, for 64 bit machines, compact
 * will be signed 63 (or fewer) bit values
 */

/* Return 1 if the argument is compact int */
static inline int
_PyLong_IsNonNegativeCompact(const PyLongObject* op) {
    assert(PyLong_Check(op));
    return (op->compact_value & 1) == 0 &&
           op->compact_value >= 0;
}

static inline int
_PyLong_IsCompact(const PyLongObject* op) {
    assert(PyLong_Check(op));
    return (op->compact_value & 1) == 0;
}

static inline int
_PyLong_BothAreCompact(const PyLongObject* a, const PyLongObject* b) {
    assert(PyLong_Check(a));
    assert(PyLong_Check(b));
    return ((a->compact_value | b->compact_value) & 1) == 0;
}

/* Returns a *compact* value, iff `_PyLong_IsCompact` is true for `op`.
 *
 * "Compact" values have at least one bit to spare,
 * so that addition and subtraction can be performed on the values
 * without risk of overflow.
 */
static inline Py_ssize_t
_PyLong_CompactValue(const PyLongObject *op)
{
    assert(PyLong_Check(op));
    assert(_PyLong_IsCompact(op));
    return Py_ARITHMETIC_RIGHT_SHIFT(intptr_t, op->compact_value, NON_SIZE_BITS);
}

static inline bool
_PyLong_IsZero(const PyLongObject *op)
{
    return op->compact_value == 0;
}

static inline bool
_PyLong_IsNegative(const PyLongObject *op)
{
    if (_PyLong_IsCompact(op)) {
        return op->compact_value < 0;
    }
    return (op->long_value.lv_tag & SIGN_NEGATIVE) != 0;
}

static inline bool
_PyLongValue_IsNegative(const _PyLongValue *lv)
{
    return (lv->lv_tag & SIGN_NEGATIVE) != 0;
}

static inline bool
_PyLong_IsPositive(const PyLongObject *op)
{

    if (_PyLong_IsCompact(op)) {
        return op->compact_value > 0;
    }
    return (op->long_value.lv_tag & SIGN_NEGATIVE) == 0;
}

static inline Py_ssize_t
_PyLong_DigitCount(const PyLongObject *op)
{
    assert(PyLong_Check(op));
    assert(!_PyLong_IsCompact(op));
    return op->long_value.lv_tag >> NON_SIZE_BITS;
}

static inline Py_ssize_t
_PyLongValue_DigitCount(const _PyLongValue *lv)
{
    return lv->lv_tag >> NON_SIZE_BITS;
}

static inline int
_PyLong_CompactSign(const PyLongObject *op)
{
    assert(PyLong_Check(op));
    assert(_PyLong_IsCompact(op));
    if (op->compact_value < 0) {
        return -1;
    }
    return op->compact_value > 0;
}

/* Equivalent to _PyLong_DigitCount(op) * _PyLong_NonCompactSign(op) */
static inline Py_ssize_t
_PyLong_SignedDigitCount(const PyLongObject *op)
{
    if (_PyLong_IsCompact(op)) {
        return _PyLong_CompactSign(op);
    }
    assert(PyLong_Check(op));
    Py_ssize_t sign = 1 - (op->long_value.lv_tag & SIGN_NEGATIVE);
    return sign * (Py_ssize_t)(op->long_value.lv_tag >> NON_SIZE_BITS);
}

static inline int
_PyLong_NonCompactSign(const PyLongObject *op)
{
    assert(PyLong_Check(op));
    assert(!_PyLong_IsCompact(op));
    return 1 - (op->long_value.lv_tag & SIGN_NEGATIVE);
}

/* Do a and b have the same sign? */
static inline int
_PyLong_SameSign(const PyLongObject *a, const PyLongObject *b)
{
    assert(!_PyLong_IsCompact(a));
    assert(!_PyLong_IsCompact(b));
    return (a->long_value.lv_tag & SIGN_NEGATIVE) == (b->long_value.lv_tag & SIGN_NEGATIVE);
}

#define TAG_FROM_SIGN_AND_SIZE(sign, size) ((1 - (sign)) | ((size) << NON_SIZE_BITS) | 1)

static inline void
_PyLong_SetSignAndDigitCount(PyLongObject *op, int sign, Py_ssize_t size)
{
    assert(size >= 0);
    assert(sign != 0);
    op->long_value.lv_tag = TAG_FROM_SIGN_AND_SIZE(sign, (size_t)size);
}

static inline void
_PyLong_SetDigitCount(PyLongObject *op, Py_ssize_t size)
{
    op->long_value.lv_tag = (((size_t)size) << NON_SIZE_BITS) | (op->long_value.lv_tag & SIGN_NEGATIVE);
}

#define NON_SIZE_MASK ~((1 << NON_SIZE_BITS) - 1)

static inline void
_PyLong_FlipSign(PyLongObject *op) {
    assert(!_PyLong_IsCompact(op));
    unsigned int flipped_sign = 2 - (op->long_value.lv_tag & SIGN_NEGATIVE);
    op->long_value.lv_tag &= NON_SIZE_MASK;
    op->long_value.lv_tag |= flipped_sign;
}

#define _PyLong_DIGIT_INIT(val) \
    { \
        .ob_base = _PyObject_HEAD_INIT(&PyLong_Type) \
        .compact_value = ((val) << NON_SIZE_BITS) \
    }

typedef struct _PyLongValue3Struct {
    uintptr_t tag; /* Number of digits, sign and flags */
    digit digits[3];
} _PyLongValue3Struct;

typedef union _PyLongValue3 {
    _PyLongValue3Struct s;
    _PyLongValue v;
} _PyLongValue3;


#ifdef __cplusplus
}
#endif
#endif /* !Py_INTERNAL_LONG_H */
