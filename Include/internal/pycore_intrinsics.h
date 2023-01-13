
#define INTRINSIC_PRINT 1
#define INTRINSIC_IMPORT_STAR 2
#define INTRINSIC_STOPITERATION_ERROR 3
#define INTRINSIC_ASYNC_GEN_WRAP 4
#define INTRINSIC_UNARY_POSITIVE 5
#define INTRINSIC_LIST_TO_TUPLE 6
#define INTRINSIC_FORMAT_STR 7
#define INTRINSIC_FORMAT_REPR 8
#define INTRINSIC_FORMAT_ASCII 9


#define MAX_INTRINSIC_1 9

typedef PyObject *(*instrinsic_func1)(PyThreadState* tstate, PyObject *value);

extern instrinsic_func1 _PyIntrinsics_UnaryFunctions[];

