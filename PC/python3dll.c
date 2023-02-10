
/* Re-export stable Python ABI */

/* Generated by Tools/build/stable_abi.py */

#ifdef _M_IX86
#define DECORATE "_"
#else
#define DECORATE
#endif

#define EXPORT_FUNC(name) \
    __pragma(comment(linker, "/EXPORT:" DECORATE #name "=" PYTHON_DLL_NAME "." #name))
#define EXPORT_DATA(name) \
    __pragma(comment(linker, "/EXPORT:" DECORATE #name "=" PYTHON_DLL_NAME "." #name ",DATA"))

EXPORT_FUNC(_Py_BuildValue_SizeT)
EXPORT_FUNC(_Py_CheckRecursiveCall)
EXPORT_FUNC(_Py_Dealloc)
EXPORT_FUNC(_Py_DecRef)
EXPORT_FUNC(_Py_DecRefShared)
EXPORT_FUNC(_Py_DecRefTotal)
EXPORT_FUNC(_Py_DecRefTotalN)
EXPORT_FUNC(_Py_DecRefTotalObj)
EXPORT_FUNC(_Py_IncRef)
EXPORT_FUNC(_Py_IncRefShared)
EXPORT_FUNC(_Py_IncRefTotal)
EXPORT_FUNC(_Py_IncRefTotalN)
EXPORT_FUNC(_Py_MergeZeroRefcount)
EXPORT_FUNC(_Py_NegativeRefcount)
EXPORT_FUNC(_Py_VaBuildValue_SizeT)
EXPORT_FUNC(_PyArg_Parse_SizeT)
EXPORT_FUNC(_PyArg_ParseTuple_SizeT)
EXPORT_FUNC(_PyArg_ParseTupleAndKeywords_SizeT)
EXPORT_FUNC(_PyArg_VaParse_SizeT)
EXPORT_FUNC(_PyArg_VaParseTupleAndKeywords_SizeT)
EXPORT_FUNC(_PyErr_BadInternalCall)
EXPORT_FUNC(_PyObject_CallFunction_SizeT)
EXPORT_FUNC(_PyObject_CallMethod_SizeT)
EXPORT_FUNC(_PyObject_GC_New)
EXPORT_FUNC(_PyObject_GC_NewVar)
EXPORT_FUNC(_PyObject_GC_Resize)
EXPORT_FUNC(_PyObject_New)
EXPORT_FUNC(_PyObject_NewVar)
EXPORT_FUNC(_PyObject_SetRefcount)
EXPORT_FUNC(_PyState_AddModule)
EXPORT_FUNC(_PyThreadState_Init)
EXPORT_FUNC(_PyThreadState_Prealloc)
EXPORT_FUNC(Py_AddPendingCall)
EXPORT_FUNC(Py_AtExit)
EXPORT_FUNC(Py_BuildValue)
EXPORT_FUNC(Py_BytesMain)
EXPORT_FUNC(Py_CompileString)
EXPORT_FUNC(Py_DecodeLocale)
EXPORT_FUNC(Py_DecRef)
EXPORT_FUNC(Py_EncodeLocale)
EXPORT_FUNC(Py_EndInterpreter)
EXPORT_FUNC(Py_EnterRecursiveCall)
EXPORT_FUNC(Py_Exit)
EXPORT_FUNC(Py_FatalError)
EXPORT_FUNC(Py_Finalize)
EXPORT_FUNC(Py_FinalizeEx)
EXPORT_FUNC(Py_GenericAlias)
EXPORT_FUNC(Py_GetArgcArgv)
EXPORT_FUNC(Py_GetBuildInfo)
EXPORT_FUNC(Py_GetCompiler)
EXPORT_FUNC(Py_GetCopyright)
EXPORT_FUNC(Py_GetExecPrefix)
EXPORT_FUNC(Py_GetPath)
EXPORT_FUNC(Py_GetPlatform)
EXPORT_FUNC(Py_GetPrefix)
EXPORT_FUNC(Py_GetProgramFullPath)
EXPORT_FUNC(Py_GetProgramName)
EXPORT_FUNC(Py_GetPythonHome)
EXPORT_FUNC(Py_GetRecursionLimit)
EXPORT_FUNC(Py_GetVersion)
EXPORT_FUNC(Py_IncRef)
EXPORT_FUNC(Py_Initialize)
EXPORT_FUNC(Py_InitializeEx)
EXPORT_FUNC(Py_Is)
EXPORT_FUNC(Py_IsFalse)
EXPORT_FUNC(Py_IsInitialized)
EXPORT_FUNC(Py_IsNone)
EXPORT_FUNC(Py_IsTrue)
EXPORT_FUNC(Py_LeaveRecursiveCall)
EXPORT_FUNC(Py_Main)
EXPORT_FUNC(Py_MakePendingCalls)
EXPORT_FUNC(Py_NewInterpreter)
EXPORT_FUNC(Py_NewRef)
EXPORT_FUNC(Py_ReprEnter)
EXPORT_FUNC(Py_ReprLeave)
EXPORT_FUNC(Py_SetPath)
EXPORT_FUNC(Py_SetProgramName)
EXPORT_FUNC(Py_SetPythonHome)
EXPORT_FUNC(Py_SetRecursionLimit)
EXPORT_FUNC(Py_VaBuildValue)
EXPORT_FUNC(Py_XNewRef)
EXPORT_FUNC(PyAIter_Check)
EXPORT_FUNC(PyArg_Parse)
EXPORT_FUNC(PyArg_ParseTuple)
EXPORT_FUNC(PyArg_ParseTupleAndKeywords)
EXPORT_FUNC(PyArg_UnpackTuple)
EXPORT_FUNC(PyArg_ValidateKeywordArguments)
EXPORT_FUNC(PyArg_VaParse)
EXPORT_FUNC(PyArg_VaParseTupleAndKeywords)
EXPORT_FUNC(PyBool_FromLong)
EXPORT_FUNC(PyBuffer_FillContiguousStrides)
EXPORT_FUNC(PyBuffer_FillInfo)
EXPORT_FUNC(PyBuffer_FromContiguous)
EXPORT_FUNC(PyBuffer_GetPointer)
EXPORT_FUNC(PyBuffer_IsContiguous)
EXPORT_FUNC(PyBuffer_Release)
EXPORT_FUNC(PyBuffer_SizeFromFormat)
EXPORT_FUNC(PyBuffer_ToContiguous)
EXPORT_FUNC(PyByteArray_AsString)
EXPORT_FUNC(PyByteArray_Concat)
EXPORT_FUNC(PyByteArray_FromObject)
EXPORT_FUNC(PyByteArray_FromStringAndSize)
EXPORT_FUNC(PyByteArray_Resize)
EXPORT_FUNC(PyByteArray_Size)
EXPORT_FUNC(PyBytes_AsString)
EXPORT_FUNC(PyBytes_AsStringAndSize)
EXPORT_FUNC(PyBytes_Concat)
EXPORT_FUNC(PyBytes_ConcatAndDel)
EXPORT_FUNC(PyBytes_DecodeEscape)
EXPORT_FUNC(PyBytes_FromFormat)
EXPORT_FUNC(PyBytes_FromFormatV)
EXPORT_FUNC(PyBytes_FromObject)
EXPORT_FUNC(PyBytes_FromString)
EXPORT_FUNC(PyBytes_FromStringAndSize)
EXPORT_FUNC(PyBytes_Repr)
EXPORT_FUNC(PyBytes_Size)
EXPORT_FUNC(PyCallable_Check)
EXPORT_FUNC(PyCallIter_New)
EXPORT_FUNC(PyCapsule_GetContext)
EXPORT_FUNC(PyCapsule_GetDestructor)
EXPORT_FUNC(PyCapsule_GetName)
EXPORT_FUNC(PyCapsule_GetPointer)
EXPORT_FUNC(PyCapsule_Import)
EXPORT_FUNC(PyCapsule_IsValid)
EXPORT_FUNC(PyCapsule_New)
EXPORT_FUNC(PyCapsule_SetContext)
EXPORT_FUNC(PyCapsule_SetDestructor)
EXPORT_FUNC(PyCapsule_SetName)
EXPORT_FUNC(PyCapsule_SetPointer)
EXPORT_FUNC(PyCFunction_Call)
EXPORT_FUNC(PyCFunction_GetFlags)
EXPORT_FUNC(PyCFunction_GetFunction)
EXPORT_FUNC(PyCFunction_GetSelf)
EXPORT_FUNC(PyCFunction_New)
EXPORT_FUNC(PyCFunction_NewEx)
EXPORT_FUNC(PyCMethod_New)
EXPORT_FUNC(PyCodec_BackslashReplaceErrors)
EXPORT_FUNC(PyCodec_Decode)
EXPORT_FUNC(PyCodec_Decoder)
EXPORT_FUNC(PyCodec_Encode)
EXPORT_FUNC(PyCodec_Encoder)
EXPORT_FUNC(PyCodec_IgnoreErrors)
EXPORT_FUNC(PyCodec_IncrementalDecoder)
EXPORT_FUNC(PyCodec_IncrementalEncoder)
EXPORT_FUNC(PyCodec_KnownEncoding)
EXPORT_FUNC(PyCodec_LookupError)
EXPORT_FUNC(PyCodec_NameReplaceErrors)
EXPORT_FUNC(PyCodec_Register)
EXPORT_FUNC(PyCodec_RegisterError)
EXPORT_FUNC(PyCodec_ReplaceErrors)
EXPORT_FUNC(PyCodec_StreamReader)
EXPORT_FUNC(PyCodec_StreamWriter)
EXPORT_FUNC(PyCodec_StrictErrors)
EXPORT_FUNC(PyCodec_Unregister)
EXPORT_FUNC(PyCodec_XMLCharRefReplaceErrors)
EXPORT_FUNC(PyComplex_FromDoubles)
EXPORT_FUNC(PyComplex_ImagAsDouble)
EXPORT_FUNC(PyComplex_RealAsDouble)
EXPORT_FUNC(PyDescr_NewClassMethod)
EXPORT_FUNC(PyDescr_NewGetSet)
EXPORT_FUNC(PyDescr_NewMember)
EXPORT_FUNC(PyDescr_NewMethod)
EXPORT_FUNC(PyDict_Clear)
EXPORT_FUNC(PyDict_Contains)
EXPORT_FUNC(PyDict_Copy)
EXPORT_FUNC(PyDict_DelItem)
EXPORT_FUNC(PyDict_DelItemString)
EXPORT_FUNC(PyDict_FetchItem)
EXPORT_FUNC(PyDict_FetchItemString)
EXPORT_FUNC(PyDict_FetchItemWithError)
EXPORT_FUNC(PyDict_GetItem)
EXPORT_FUNC(PyDict_GetItemString)
EXPORT_FUNC(PyDict_GetItemWithError)
EXPORT_FUNC(PyDict_Items)
EXPORT_FUNC(PyDict_Keys)
EXPORT_FUNC(PyDict_Merge)
EXPORT_FUNC(PyDict_MergeFromSeq2)
EXPORT_FUNC(PyDict_New)
EXPORT_FUNC(PyDict_Next)
EXPORT_FUNC(PyDict_SetItem)
EXPORT_FUNC(PyDict_SetItemString)
EXPORT_FUNC(PyDict_Size)
EXPORT_FUNC(PyDict_Update)
EXPORT_FUNC(PyDict_Values)
EXPORT_FUNC(PyDictProxy_New)
EXPORT_FUNC(PyErr_BadArgument)
EXPORT_FUNC(PyErr_BadInternalCall)
EXPORT_FUNC(PyErr_CheckSignals)
EXPORT_FUNC(PyErr_Clear)
EXPORT_FUNC(PyErr_Display)
EXPORT_FUNC(PyErr_ExceptionMatches)
EXPORT_FUNC(PyErr_Fetch)
EXPORT_FUNC(PyErr_Format)
EXPORT_FUNC(PyErr_FormatV)
EXPORT_FUNC(PyErr_GetExcInfo)
EXPORT_FUNC(PyErr_GetHandledException)
EXPORT_FUNC(PyErr_GivenExceptionMatches)
EXPORT_FUNC(PyErr_NewException)
EXPORT_FUNC(PyErr_NewExceptionWithDoc)
EXPORT_FUNC(PyErr_NoMemory)
EXPORT_FUNC(PyErr_NormalizeException)
EXPORT_FUNC(PyErr_Occurred)
EXPORT_FUNC(PyErr_Print)
EXPORT_FUNC(PyErr_PrintEx)
EXPORT_FUNC(PyErr_ProgramText)
EXPORT_FUNC(PyErr_ResourceWarning)
EXPORT_FUNC(PyErr_Restore)
EXPORT_FUNC(PyErr_SetExcFromWindowsErr)
EXPORT_FUNC(PyErr_SetExcFromWindowsErrWithFilename)
EXPORT_FUNC(PyErr_SetExcFromWindowsErrWithFilenameObject)
EXPORT_FUNC(PyErr_SetExcFromWindowsErrWithFilenameObjects)
EXPORT_FUNC(PyErr_SetExcInfo)
EXPORT_FUNC(PyErr_SetFromErrno)
EXPORT_FUNC(PyErr_SetFromErrnoWithFilename)
EXPORT_FUNC(PyErr_SetFromErrnoWithFilenameObject)
EXPORT_FUNC(PyErr_SetFromErrnoWithFilenameObjects)
EXPORT_FUNC(PyErr_SetFromWindowsErr)
EXPORT_FUNC(PyErr_SetFromWindowsErrWithFilename)
EXPORT_FUNC(PyErr_SetHandledException)
EXPORT_FUNC(PyErr_SetImportError)
EXPORT_FUNC(PyErr_SetImportErrorSubclass)
EXPORT_FUNC(PyErr_SetInterrupt)
EXPORT_FUNC(PyErr_SetInterruptEx)
EXPORT_FUNC(PyErr_SetNone)
EXPORT_FUNC(PyErr_SetObject)
EXPORT_FUNC(PyErr_SetString)
EXPORT_FUNC(PyErr_SyntaxLocation)
EXPORT_FUNC(PyErr_SyntaxLocationEx)
EXPORT_FUNC(PyErr_WarnEx)
EXPORT_FUNC(PyErr_WarnExplicit)
EXPORT_FUNC(PyErr_WarnFormat)
EXPORT_FUNC(PyErr_WriteUnraisable)
EXPORT_FUNC(PyEval_AcquireLock)
EXPORT_FUNC(PyEval_AcquireThread)
EXPORT_FUNC(PyEval_CallFunction)
EXPORT_FUNC(PyEval_CallMethod)
EXPORT_FUNC(PyEval_CallObjectWithKeywords)
EXPORT_FUNC(PyEval_EvalCode)
EXPORT_FUNC(PyEval_EvalCodeEx)
EXPORT_FUNC(PyEval_EvalFrame)
EXPORT_FUNC(PyEval_EvalFrameEx)
EXPORT_FUNC(PyEval_GetBuiltins)
EXPORT_FUNC(PyEval_GetFrame)
EXPORT_FUNC(PyEval_GetFuncDesc)
EXPORT_FUNC(PyEval_GetFuncName)
EXPORT_FUNC(PyEval_GetGlobals)
EXPORT_FUNC(PyEval_GetLocals)
EXPORT_FUNC(PyEval_InitThreads)
EXPORT_FUNC(PyEval_ReleaseLock)
EXPORT_FUNC(PyEval_ReleaseThread)
EXPORT_FUNC(PyEval_RestoreThread)
EXPORT_FUNC(PyEval_SaveThread)
EXPORT_FUNC(PyEval_ThreadsInitialized)
EXPORT_FUNC(PyException_GetCause)
EXPORT_FUNC(PyException_GetContext)
EXPORT_FUNC(PyException_GetTraceback)
EXPORT_FUNC(PyException_SetCause)
EXPORT_FUNC(PyException_SetContext)
EXPORT_FUNC(PyException_SetTraceback)
EXPORT_FUNC(PyExceptionClass_Name)
EXPORT_FUNC(PyFile_FromFd)
EXPORT_FUNC(PyFile_GetLine)
EXPORT_FUNC(PyFile_WriteObject)
EXPORT_FUNC(PyFile_WriteString)
EXPORT_FUNC(PyFloat_AsDouble)
EXPORT_FUNC(PyFloat_FromDouble)
EXPORT_FUNC(PyFloat_FromString)
EXPORT_FUNC(PyFloat_GetInfo)
EXPORT_FUNC(PyFloat_GetMax)
EXPORT_FUNC(PyFloat_GetMin)
EXPORT_FUNC(PyFrame_GetCode)
EXPORT_FUNC(PyFrame_GetLineNumber)
EXPORT_FUNC(PyFrozenSet_New)
EXPORT_FUNC(PyGC_Collect)
EXPORT_FUNC(PyGC_Disable)
EXPORT_FUNC(PyGC_Enable)
EXPORT_FUNC(PyGC_IsEnabled)
EXPORT_FUNC(PyGILState_Ensure)
EXPORT_FUNC(PyGILState_GetThisThreadState)
EXPORT_FUNC(PyGILState_Release)
EXPORT_FUNC(PyImport_AddModule)
EXPORT_FUNC(PyImport_AddModuleObject)
EXPORT_FUNC(PyImport_AppendInittab)
EXPORT_FUNC(PyImport_ExecCodeModule)
EXPORT_FUNC(PyImport_ExecCodeModuleEx)
EXPORT_FUNC(PyImport_ExecCodeModuleObject)
EXPORT_FUNC(PyImport_ExecCodeModuleWithPathnames)
EXPORT_FUNC(PyImport_GetImporter)
EXPORT_FUNC(PyImport_GetMagicNumber)
EXPORT_FUNC(PyImport_GetMagicTag)
EXPORT_FUNC(PyImport_GetModule)
EXPORT_FUNC(PyImport_GetModuleDict)
EXPORT_FUNC(PyImport_Import)
EXPORT_FUNC(PyImport_ImportFrozenModule)
EXPORT_FUNC(PyImport_ImportFrozenModuleObject)
EXPORT_FUNC(PyImport_ImportModule)
EXPORT_FUNC(PyImport_ImportModuleLevel)
EXPORT_FUNC(PyImport_ImportModuleLevelObject)
EXPORT_FUNC(PyImport_ImportModuleNoBlock)
EXPORT_FUNC(PyImport_ReloadModule)
EXPORT_FUNC(PyIndex_Check)
EXPORT_FUNC(PyInterpreterState_Clear)
EXPORT_FUNC(PyInterpreterState_Delete)
EXPORT_FUNC(PyInterpreterState_Get)
EXPORT_FUNC(PyInterpreterState_GetDict)
EXPORT_FUNC(PyInterpreterState_GetID)
EXPORT_FUNC(PyInterpreterState_New)
EXPORT_FUNC(PyIter_Check)
EXPORT_FUNC(PyIter_Next)
EXPORT_FUNC(PyIter_Send)
EXPORT_FUNC(PyList_Append)
EXPORT_FUNC(PyList_AsTuple)
EXPORT_FUNC(PyList_FetchItem)
EXPORT_FUNC(PyList_GetItem)
EXPORT_FUNC(PyList_GetSlice)
EXPORT_FUNC(PyList_Insert)
EXPORT_FUNC(PyList_New)
EXPORT_FUNC(PyList_Reverse)
EXPORT_FUNC(PyList_SetItem)
EXPORT_FUNC(PyList_SetSlice)
EXPORT_FUNC(PyList_Size)
EXPORT_FUNC(PyList_Sort)
EXPORT_FUNC(PyLong_AsDouble)
EXPORT_FUNC(PyLong_AsLong)
EXPORT_FUNC(PyLong_AsLongAndOverflow)
EXPORT_FUNC(PyLong_AsLongLong)
EXPORT_FUNC(PyLong_AsLongLongAndOverflow)
EXPORT_FUNC(PyLong_AsSize_t)
EXPORT_FUNC(PyLong_AsSsize_t)
EXPORT_FUNC(PyLong_AsUnsignedLong)
EXPORT_FUNC(PyLong_AsUnsignedLongLong)
EXPORT_FUNC(PyLong_AsUnsignedLongLongMask)
EXPORT_FUNC(PyLong_AsUnsignedLongMask)
EXPORT_FUNC(PyLong_AsVoidPtr)
EXPORT_FUNC(PyLong_FromDouble)
EXPORT_FUNC(PyLong_FromLong)
EXPORT_FUNC(PyLong_FromLongLong)
EXPORT_FUNC(PyLong_FromSize_t)
EXPORT_FUNC(PyLong_FromSsize_t)
EXPORT_FUNC(PyLong_FromString)
EXPORT_FUNC(PyLong_FromUnsignedLong)
EXPORT_FUNC(PyLong_FromUnsignedLongLong)
EXPORT_FUNC(PyLong_FromVoidPtr)
EXPORT_FUNC(PyLong_GetInfo)
EXPORT_FUNC(PyMapping_Check)
EXPORT_FUNC(PyMapping_GetItemString)
EXPORT_FUNC(PyMapping_HasKey)
EXPORT_FUNC(PyMapping_HasKeyString)
EXPORT_FUNC(PyMapping_Items)
EXPORT_FUNC(PyMapping_Keys)
EXPORT_FUNC(PyMapping_Length)
EXPORT_FUNC(PyMapping_SetItemString)
EXPORT_FUNC(PyMapping_Size)
EXPORT_FUNC(PyMapping_Values)
EXPORT_FUNC(PyMarshal_ReadObjectFromString)
EXPORT_FUNC(PyMarshal_WriteObjectToString)
EXPORT_FUNC(PyMem_Calloc)
EXPORT_FUNC(PyMem_Free)
EXPORT_FUNC(PyMem_Malloc)
EXPORT_FUNC(PyMem_Realloc)
EXPORT_FUNC(PyMember_GetOne)
EXPORT_FUNC(PyMember_SetOne)
EXPORT_FUNC(PyMemoryView_FromBuffer)
EXPORT_FUNC(PyMemoryView_FromMemory)
EXPORT_FUNC(PyMemoryView_FromObject)
EXPORT_FUNC(PyMemoryView_GetContiguous)
EXPORT_FUNC(PyModule_AddFunctions)
EXPORT_FUNC(PyModule_AddIntConstant)
EXPORT_FUNC(PyModule_AddObject)
EXPORT_FUNC(PyModule_AddObjectRef)
EXPORT_FUNC(PyModule_AddStringConstant)
EXPORT_FUNC(PyModule_AddType)
EXPORT_FUNC(PyModule_Create2)
EXPORT_FUNC(PyModule_ExecDef)
EXPORT_FUNC(PyModule_FromDefAndSpec2)
EXPORT_FUNC(PyModule_GetDef)
EXPORT_FUNC(PyModule_GetDict)
EXPORT_FUNC(PyModule_GetFilename)
EXPORT_FUNC(PyModule_GetFilenameObject)
EXPORT_FUNC(PyModule_GetName)
EXPORT_FUNC(PyModule_GetNameObject)
EXPORT_FUNC(PyModule_GetState)
EXPORT_FUNC(PyModule_New)
EXPORT_FUNC(PyModule_NewObject)
EXPORT_FUNC(PyModule_SetDocString)
EXPORT_FUNC(PyModuleDef_Init)
EXPORT_FUNC(PyNumber_Absolute)
EXPORT_FUNC(PyNumber_Add)
EXPORT_FUNC(PyNumber_And)
EXPORT_FUNC(PyNumber_AsSsize_t)
EXPORT_FUNC(PyNumber_Check)
EXPORT_FUNC(PyNumber_Divmod)
EXPORT_FUNC(PyNumber_Float)
EXPORT_FUNC(PyNumber_FloorDivide)
EXPORT_FUNC(PyNumber_Index)
EXPORT_FUNC(PyNumber_InPlaceAdd)
EXPORT_FUNC(PyNumber_InPlaceAnd)
EXPORT_FUNC(PyNumber_InPlaceFloorDivide)
EXPORT_FUNC(PyNumber_InPlaceLshift)
EXPORT_FUNC(PyNumber_InPlaceMatrixMultiply)
EXPORT_FUNC(PyNumber_InPlaceMultiply)
EXPORT_FUNC(PyNumber_InPlaceOr)
EXPORT_FUNC(PyNumber_InPlacePower)
EXPORT_FUNC(PyNumber_InPlaceRemainder)
EXPORT_FUNC(PyNumber_InPlaceRshift)
EXPORT_FUNC(PyNumber_InPlaceSubtract)
EXPORT_FUNC(PyNumber_InPlaceTrueDivide)
EXPORT_FUNC(PyNumber_InPlaceXor)
EXPORT_FUNC(PyNumber_Invert)
EXPORT_FUNC(PyNumber_Long)
EXPORT_FUNC(PyNumber_Lshift)
EXPORT_FUNC(PyNumber_MatrixMultiply)
EXPORT_FUNC(PyNumber_Multiply)
EXPORT_FUNC(PyNumber_Negative)
EXPORT_FUNC(PyNumber_Or)
EXPORT_FUNC(PyNumber_Positive)
EXPORT_FUNC(PyNumber_Power)
EXPORT_FUNC(PyNumber_Remainder)
EXPORT_FUNC(PyNumber_Rshift)
EXPORT_FUNC(PyNumber_Subtract)
EXPORT_FUNC(PyNumber_ToBase)
EXPORT_FUNC(PyNumber_TrueDivide)
EXPORT_FUNC(PyNumber_Xor)
EXPORT_FUNC(PyObject_AsCharBuffer)
EXPORT_FUNC(PyObject_ASCII)
EXPORT_FUNC(PyObject_AsFileDescriptor)
EXPORT_FUNC(PyObject_AsReadBuffer)
EXPORT_FUNC(PyObject_AsWriteBuffer)
EXPORT_FUNC(PyObject_Bytes)
EXPORT_FUNC(PyObject_Call)
EXPORT_FUNC(PyObject_CallFunction)
EXPORT_FUNC(PyObject_CallFunctionObjArgs)
EXPORT_FUNC(PyObject_CallMethod)
EXPORT_FUNC(PyObject_CallMethodObjArgs)
EXPORT_FUNC(PyObject_CallNoArgs)
EXPORT_FUNC(PyObject_CallObject)
EXPORT_FUNC(PyObject_Calloc)
EXPORT_FUNC(PyObject_CheckBuffer)
EXPORT_FUNC(PyObject_CheckReadBuffer)
EXPORT_FUNC(PyObject_ClearWeakRefs)
EXPORT_FUNC(PyObject_CopyData)
EXPORT_FUNC(PyObject_DelItem)
EXPORT_FUNC(PyObject_DelItemString)
EXPORT_FUNC(PyObject_Dir)
EXPORT_FUNC(PyObject_Format)
EXPORT_FUNC(PyObject_Free)
EXPORT_FUNC(PyObject_GC_Del)
EXPORT_FUNC(PyObject_GC_IsFinalized)
EXPORT_FUNC(PyObject_GC_IsTracked)
EXPORT_FUNC(PyObject_GC_Track)
EXPORT_FUNC(PyObject_GC_UnTrack)
EXPORT_FUNC(PyObject_GenericGetAttr)
EXPORT_FUNC(PyObject_GenericGetDict)
EXPORT_FUNC(PyObject_GenericSetAttr)
EXPORT_FUNC(PyObject_GenericSetDict)
EXPORT_FUNC(PyObject_GetAIter)
EXPORT_FUNC(PyObject_GetAttr)
EXPORT_FUNC(PyObject_GetAttrString)
EXPORT_FUNC(PyObject_GetBuffer)
EXPORT_FUNC(PyObject_GetItem)
EXPORT_FUNC(PyObject_GetIter)
EXPORT_FUNC(PyObject_HasAttr)
EXPORT_FUNC(PyObject_HasAttrString)
EXPORT_FUNC(PyObject_Hash)
EXPORT_FUNC(PyObject_HashNotImplemented)
EXPORT_FUNC(PyObject_Init)
EXPORT_FUNC(PyObject_InitVar)
EXPORT_FUNC(PyObject_IsInstance)
EXPORT_FUNC(PyObject_IsSubclass)
EXPORT_FUNC(PyObject_IsTrue)
EXPORT_FUNC(PyObject_Length)
EXPORT_FUNC(PyObject_Malloc)
EXPORT_FUNC(PyObject_Not)
EXPORT_FUNC(PyObject_Realloc)
EXPORT_FUNC(PyObject_Repr)
EXPORT_FUNC(PyObject_RichCompare)
EXPORT_FUNC(PyObject_RichCompareBool)
EXPORT_FUNC(PyObject_SelfIter)
EXPORT_FUNC(PyObject_SetAttr)
EXPORT_FUNC(PyObject_SetAttrString)
EXPORT_FUNC(PyObject_SetItem)
EXPORT_FUNC(PyObject_Size)
EXPORT_FUNC(PyObject_Str)
EXPORT_FUNC(PyObject_Type)
EXPORT_FUNC(PyObject_Vectorcall)
EXPORT_FUNC(PyObject_VectorcallMethod)
EXPORT_FUNC(PyOS_CheckStack)
EXPORT_FUNC(PyOS_double_to_string)
EXPORT_FUNC(PyOS_FSPath)
EXPORT_FUNC(PyOS_getsig)
EXPORT_FUNC(PyOS_InterruptOccurred)
EXPORT_FUNC(PyOS_mystricmp)
EXPORT_FUNC(PyOS_mystrnicmp)
EXPORT_FUNC(PyOS_setsig)
EXPORT_FUNC(PyOS_snprintf)
EXPORT_FUNC(PyOS_string_to_double)
EXPORT_FUNC(PyOS_strtol)
EXPORT_FUNC(PyOS_strtoul)
EXPORT_FUNC(PyOS_vsnprintf)
EXPORT_FUNC(PySeqIter_New)
EXPORT_FUNC(PySequence_Check)
EXPORT_FUNC(PySequence_Concat)
EXPORT_FUNC(PySequence_Contains)
EXPORT_FUNC(PySequence_Count)
EXPORT_FUNC(PySequence_DelItem)
EXPORT_FUNC(PySequence_DelSlice)
EXPORT_FUNC(PySequence_Fast)
EXPORT_FUNC(PySequence_GetItem)
EXPORT_FUNC(PySequence_GetSlice)
EXPORT_FUNC(PySequence_In)
EXPORT_FUNC(PySequence_Index)
EXPORT_FUNC(PySequence_InPlaceConcat)
EXPORT_FUNC(PySequence_InPlaceRepeat)
EXPORT_FUNC(PySequence_Length)
EXPORT_FUNC(PySequence_List)
EXPORT_FUNC(PySequence_Repeat)
EXPORT_FUNC(PySequence_SetItem)
EXPORT_FUNC(PySequence_SetSlice)
EXPORT_FUNC(PySequence_Size)
EXPORT_FUNC(PySequence_Tuple)
EXPORT_FUNC(PySet_Add)
EXPORT_FUNC(PySet_Clear)
EXPORT_FUNC(PySet_Contains)
EXPORT_FUNC(PySet_Discard)
EXPORT_FUNC(PySet_New)
EXPORT_FUNC(PySet_Pop)
EXPORT_FUNC(PySet_Size)
EXPORT_FUNC(PySlice_AdjustIndices)
EXPORT_FUNC(PySlice_GetIndices)
EXPORT_FUNC(PySlice_GetIndicesEx)
EXPORT_FUNC(PySlice_New)
EXPORT_FUNC(PySlice_Unpack)
EXPORT_FUNC(PyState_AddModule)
EXPORT_FUNC(PyState_FindModule)
EXPORT_FUNC(PyState_RemoveModule)
EXPORT_FUNC(PyStructSequence_GetItem)
EXPORT_FUNC(PyStructSequence_New)
EXPORT_FUNC(PyStructSequence_NewType)
EXPORT_FUNC(PyStructSequence_SetItem)
EXPORT_FUNC(PySys_AddWarnOption)
EXPORT_FUNC(PySys_AddWarnOptionUnicode)
EXPORT_FUNC(PySys_AddXOption)
EXPORT_FUNC(PySys_FormatStderr)
EXPORT_FUNC(PySys_FormatStdout)
EXPORT_FUNC(PySys_GetObject)
EXPORT_FUNC(PySys_GetXOptions)
EXPORT_FUNC(PySys_HasWarnOptions)
EXPORT_FUNC(PySys_ResetWarnOptions)
EXPORT_FUNC(PySys_SetArgv)
EXPORT_FUNC(PySys_SetArgvEx)
EXPORT_FUNC(PySys_SetObject)
EXPORT_FUNC(PySys_SetPath)
EXPORT_FUNC(PySys_WriteStderr)
EXPORT_FUNC(PySys_WriteStdout)
EXPORT_FUNC(PyThread_acquire_lock)
EXPORT_FUNC(PyThread_acquire_lock_timed)
EXPORT_FUNC(PyThread_allocate_lock)
EXPORT_FUNC(PyThread_create_key)
EXPORT_FUNC(PyThread_delete_key)
EXPORT_FUNC(PyThread_delete_key_value)
EXPORT_FUNC(PyThread_exit_thread)
EXPORT_FUNC(PyThread_free_lock)
EXPORT_FUNC(PyThread_get_key_value)
EXPORT_FUNC(PyThread_get_stacksize)
EXPORT_FUNC(PyThread_get_thread_ident)
EXPORT_FUNC(PyThread_get_thread_native_id)
EXPORT_FUNC(PyThread_GetInfo)
EXPORT_FUNC(PyThread_init_thread)
EXPORT_FUNC(PyThread_ReInitTLS)
EXPORT_FUNC(PyThread_release_lock)
EXPORT_FUNC(PyThread_set_key_value)
EXPORT_FUNC(PyThread_set_stacksize)
EXPORT_FUNC(PyThread_start_new_thread)
EXPORT_FUNC(PyThread_tss_alloc)
EXPORT_FUNC(PyThread_tss_create)
EXPORT_FUNC(PyThread_tss_delete)
EXPORT_FUNC(PyThread_tss_free)
EXPORT_FUNC(PyThread_tss_get)
EXPORT_FUNC(PyThread_tss_is_created)
EXPORT_FUNC(PyThread_tss_set)
EXPORT_FUNC(PyThreadState_Clear)
EXPORT_FUNC(PyThreadState_Delete)
EXPORT_FUNC(PyThreadState_DeleteCurrent)
EXPORT_FUNC(PyThreadState_Get)
EXPORT_FUNC(PyThreadState_GetDict)
EXPORT_FUNC(PyThreadState_GetFrame)
EXPORT_FUNC(PyThreadState_GetID)
EXPORT_FUNC(PyThreadState_GetInterpreter)
EXPORT_FUNC(PyThreadState_New)
EXPORT_FUNC(PyThreadState_SetAsyncExc)
EXPORT_FUNC(PyThreadState_Swap)
EXPORT_FUNC(PyTraceBack_Here)
EXPORT_FUNC(PyTraceBack_Print)
EXPORT_FUNC(PyTuple_GetItem)
EXPORT_FUNC(PyTuple_GetSlice)
EXPORT_FUNC(PyTuple_New)
EXPORT_FUNC(PyTuple_Pack)
EXPORT_FUNC(PyTuple_SetItem)
EXPORT_FUNC(PyTuple_Size)
EXPORT_FUNC(PyType_ClearCache)
EXPORT_FUNC(PyType_FromMetaclass)
EXPORT_FUNC(PyType_FromModuleAndSpec)
EXPORT_FUNC(PyType_FromSpec)
EXPORT_FUNC(PyType_FromSpecWithBases)
EXPORT_FUNC(PyType_GenericAlloc)
EXPORT_FUNC(PyType_GenericNew)
EXPORT_FUNC(PyType_GetFlags)
EXPORT_FUNC(PyType_GetModule)
EXPORT_FUNC(PyType_GetModuleState)
EXPORT_FUNC(PyType_GetName)
EXPORT_FUNC(PyType_GetQualName)
EXPORT_FUNC(PyType_GetSlot)
EXPORT_FUNC(PyType_IsSubtype)
EXPORT_FUNC(PyType_Modified)
EXPORT_FUNC(PyType_Ready)
EXPORT_FUNC(PyUnicode_Append)
EXPORT_FUNC(PyUnicode_AppendAndDel)
EXPORT_FUNC(PyUnicode_AsASCIIString)
EXPORT_FUNC(PyUnicode_AsCharmapString)
EXPORT_FUNC(PyUnicode_AsDecodedObject)
EXPORT_FUNC(PyUnicode_AsDecodedUnicode)
EXPORT_FUNC(PyUnicode_AsEncodedObject)
EXPORT_FUNC(PyUnicode_AsEncodedString)
EXPORT_FUNC(PyUnicode_AsEncodedUnicode)
EXPORT_FUNC(PyUnicode_AsLatin1String)
EXPORT_FUNC(PyUnicode_AsMBCSString)
EXPORT_FUNC(PyUnicode_AsRawUnicodeEscapeString)
EXPORT_FUNC(PyUnicode_AsUCS4)
EXPORT_FUNC(PyUnicode_AsUCS4Copy)
EXPORT_FUNC(PyUnicode_AsUnicodeEscapeString)
EXPORT_FUNC(PyUnicode_AsUTF16String)
EXPORT_FUNC(PyUnicode_AsUTF32String)
EXPORT_FUNC(PyUnicode_AsUTF8AndSize)
EXPORT_FUNC(PyUnicode_AsUTF8String)
EXPORT_FUNC(PyUnicode_AsWideChar)
EXPORT_FUNC(PyUnicode_AsWideCharString)
EXPORT_FUNC(PyUnicode_BuildEncodingMap)
EXPORT_FUNC(PyUnicode_Compare)
EXPORT_FUNC(PyUnicode_CompareWithASCIIString)
EXPORT_FUNC(PyUnicode_Concat)
EXPORT_FUNC(PyUnicode_Contains)
EXPORT_FUNC(PyUnicode_Count)
EXPORT_FUNC(PyUnicode_Decode)
EXPORT_FUNC(PyUnicode_DecodeASCII)
EXPORT_FUNC(PyUnicode_DecodeCharmap)
EXPORT_FUNC(PyUnicode_DecodeCodePageStateful)
EXPORT_FUNC(PyUnicode_DecodeFSDefault)
EXPORT_FUNC(PyUnicode_DecodeFSDefaultAndSize)
EXPORT_FUNC(PyUnicode_DecodeLatin1)
EXPORT_FUNC(PyUnicode_DecodeLocale)
EXPORT_FUNC(PyUnicode_DecodeLocaleAndSize)
EXPORT_FUNC(PyUnicode_DecodeMBCS)
EXPORT_FUNC(PyUnicode_DecodeMBCSStateful)
EXPORT_FUNC(PyUnicode_DecodeRawUnicodeEscape)
EXPORT_FUNC(PyUnicode_DecodeUnicodeEscape)
EXPORT_FUNC(PyUnicode_DecodeUTF16)
EXPORT_FUNC(PyUnicode_DecodeUTF16Stateful)
EXPORT_FUNC(PyUnicode_DecodeUTF32)
EXPORT_FUNC(PyUnicode_DecodeUTF32Stateful)
EXPORT_FUNC(PyUnicode_DecodeUTF7)
EXPORT_FUNC(PyUnicode_DecodeUTF7Stateful)
EXPORT_FUNC(PyUnicode_DecodeUTF8)
EXPORT_FUNC(PyUnicode_DecodeUTF8Stateful)
EXPORT_FUNC(PyUnicode_EncodeCodePage)
EXPORT_FUNC(PyUnicode_EncodeFSDefault)
EXPORT_FUNC(PyUnicode_EncodeLocale)
EXPORT_FUNC(PyUnicode_Find)
EXPORT_FUNC(PyUnicode_FindChar)
EXPORT_FUNC(PyUnicode_Format)
EXPORT_FUNC(PyUnicode_FromEncodedObject)
EXPORT_FUNC(PyUnicode_FromFormat)
EXPORT_FUNC(PyUnicode_FromFormatV)
EXPORT_FUNC(PyUnicode_FromObject)
EXPORT_FUNC(PyUnicode_FromOrdinal)
EXPORT_FUNC(PyUnicode_FromString)
EXPORT_FUNC(PyUnicode_FromStringAndSize)
EXPORT_FUNC(PyUnicode_FromWideChar)
EXPORT_FUNC(PyUnicode_FSConverter)
EXPORT_FUNC(PyUnicode_FSDecoder)
EXPORT_FUNC(PyUnicode_GetDefaultEncoding)
EXPORT_FUNC(PyUnicode_GetLength)
EXPORT_FUNC(PyUnicode_GetSize)
EXPORT_FUNC(PyUnicode_InternFromString)
EXPORT_FUNC(PyUnicode_InternImmortal)
EXPORT_FUNC(PyUnicode_InternInPlace)
EXPORT_FUNC(PyUnicode_IsIdentifier)
EXPORT_FUNC(PyUnicode_Join)
EXPORT_FUNC(PyUnicode_Partition)
EXPORT_FUNC(PyUnicode_ReadChar)
EXPORT_FUNC(PyUnicode_Replace)
EXPORT_FUNC(PyUnicode_Resize)
EXPORT_FUNC(PyUnicode_RichCompare)
EXPORT_FUNC(PyUnicode_RPartition)
EXPORT_FUNC(PyUnicode_RSplit)
EXPORT_FUNC(PyUnicode_Split)
EXPORT_FUNC(PyUnicode_Splitlines)
EXPORT_FUNC(PyUnicode_Substring)
EXPORT_FUNC(PyUnicode_Tailmatch)
EXPORT_FUNC(PyUnicode_Translate)
EXPORT_FUNC(PyUnicode_WriteChar)
EXPORT_FUNC(PyUnicodeDecodeError_Create)
EXPORT_FUNC(PyUnicodeDecodeError_GetEncoding)
EXPORT_FUNC(PyUnicodeDecodeError_GetEnd)
EXPORT_FUNC(PyUnicodeDecodeError_GetObject)
EXPORT_FUNC(PyUnicodeDecodeError_GetReason)
EXPORT_FUNC(PyUnicodeDecodeError_GetStart)
EXPORT_FUNC(PyUnicodeDecodeError_SetEnd)
EXPORT_FUNC(PyUnicodeDecodeError_SetReason)
EXPORT_FUNC(PyUnicodeDecodeError_SetStart)
EXPORT_FUNC(PyUnicodeEncodeError_GetEncoding)
EXPORT_FUNC(PyUnicodeEncodeError_GetEnd)
EXPORT_FUNC(PyUnicodeEncodeError_GetObject)
EXPORT_FUNC(PyUnicodeEncodeError_GetReason)
EXPORT_FUNC(PyUnicodeEncodeError_GetStart)
EXPORT_FUNC(PyUnicodeEncodeError_SetEnd)
EXPORT_FUNC(PyUnicodeEncodeError_SetReason)
EXPORT_FUNC(PyUnicodeEncodeError_SetStart)
EXPORT_FUNC(PyUnicodeTranslateError_GetEnd)
EXPORT_FUNC(PyUnicodeTranslateError_GetObject)
EXPORT_FUNC(PyUnicodeTranslateError_GetReason)
EXPORT_FUNC(PyUnicodeTranslateError_GetStart)
EXPORT_FUNC(PyUnicodeTranslateError_SetEnd)
EXPORT_FUNC(PyUnicodeTranslateError_SetReason)
EXPORT_FUNC(PyUnicodeTranslateError_SetStart)
EXPORT_FUNC(PyVectorcall_Call)
EXPORT_FUNC(PyVectorcall_NARGS)
EXPORT_FUNC(PyWeakref_FetchObject)
EXPORT_FUNC(PyWeakref_GetObject)
EXPORT_FUNC(PyWeakref_NewProxy)
EXPORT_FUNC(PyWeakref_NewRef)
EXPORT_FUNC(PyWrapper_New)

EXPORT_DATA(_Py_EllipsisObject)
EXPORT_DATA(_Py_FalseStruct)
EXPORT_DATA(_Py_NoneStruct)
EXPORT_DATA(_Py_NotImplementedStruct)
EXPORT_DATA(_Py_SwappedOp)
EXPORT_DATA(_Py_TrueStruct)
EXPORT_DATA(_PyWeakref_CallableProxyType)
EXPORT_DATA(_PyWeakref_ProxyType)
EXPORT_DATA(_PyWeakref_RefType)
EXPORT_DATA(Py_FileSystemDefaultEncodeErrors)
EXPORT_DATA(Py_FileSystemDefaultEncoding)
EXPORT_DATA(Py_GenericAliasType)
EXPORT_DATA(Py_HasFileSystemDefaultEncoding)
EXPORT_DATA(Py_UTF8Mode)
EXPORT_DATA(Py_Version)
EXPORT_DATA(PyBaseObject_Type)
EXPORT_DATA(PyBool_Type)
EXPORT_DATA(PyByteArray_Type)
EXPORT_DATA(PyByteArrayIter_Type)
EXPORT_DATA(PyBytes_Type)
EXPORT_DATA(PyBytesIter_Type)
EXPORT_DATA(PyCallIter_Type)
EXPORT_DATA(PyCapsule_Type)
EXPORT_DATA(PyCFunction_Type)
EXPORT_DATA(PyClassMethodDescr_Type)
EXPORT_DATA(PyComplex_Type)
EXPORT_DATA(PyDict_Type)
EXPORT_DATA(PyDictItems_Type)
EXPORT_DATA(PyDictIterItem_Type)
EXPORT_DATA(PyDictIterKey_Type)
EXPORT_DATA(PyDictIterValue_Type)
EXPORT_DATA(PyDictKeys_Type)
EXPORT_DATA(PyDictProxy_Type)
EXPORT_DATA(PyDictRevIterItem_Type)
EXPORT_DATA(PyDictRevIterKey_Type)
EXPORT_DATA(PyDictRevIterValue_Type)
EXPORT_DATA(PyDictValues_Type)
EXPORT_DATA(PyEllipsis_Type)
EXPORT_DATA(PyEnum_Type)
EXPORT_DATA(PyExc_ArithmeticError)
EXPORT_DATA(PyExc_AssertionError)
EXPORT_DATA(PyExc_AttributeError)
EXPORT_DATA(PyExc_BaseException)
EXPORT_DATA(PyExc_BaseExceptionGroup)
EXPORT_DATA(PyExc_BlockingIOError)
EXPORT_DATA(PyExc_BrokenPipeError)
EXPORT_DATA(PyExc_BufferError)
EXPORT_DATA(PyExc_BytesWarning)
EXPORT_DATA(PyExc_ChildProcessError)
EXPORT_DATA(PyExc_ConnectionAbortedError)
EXPORT_DATA(PyExc_ConnectionError)
EXPORT_DATA(PyExc_ConnectionRefusedError)
EXPORT_DATA(PyExc_ConnectionResetError)
EXPORT_DATA(PyExc_DeprecationWarning)
EXPORT_DATA(PyExc_EncodingWarning)
EXPORT_DATA(PyExc_EnvironmentError)
EXPORT_DATA(PyExc_EOFError)
EXPORT_DATA(PyExc_Exception)
EXPORT_DATA(PyExc_FileExistsError)
EXPORT_DATA(PyExc_FileNotFoundError)
EXPORT_DATA(PyExc_FloatingPointError)
EXPORT_DATA(PyExc_FutureWarning)
EXPORT_DATA(PyExc_GeneratorExit)
EXPORT_DATA(PyExc_ImportError)
EXPORT_DATA(PyExc_ImportWarning)
EXPORT_DATA(PyExc_IndentationError)
EXPORT_DATA(PyExc_IndexError)
EXPORT_DATA(PyExc_InterruptedError)
EXPORT_DATA(PyExc_IOError)
EXPORT_DATA(PyExc_IsADirectoryError)
EXPORT_DATA(PyExc_KeyboardInterrupt)
EXPORT_DATA(PyExc_KeyError)
EXPORT_DATA(PyExc_LookupError)
EXPORT_DATA(PyExc_MemoryError)
EXPORT_DATA(PyExc_ModuleNotFoundError)
EXPORT_DATA(PyExc_NameError)
EXPORT_DATA(PyExc_NotADirectoryError)
EXPORT_DATA(PyExc_NotImplementedError)
EXPORT_DATA(PyExc_OSError)
EXPORT_DATA(PyExc_OverflowError)
EXPORT_DATA(PyExc_PendingDeprecationWarning)
EXPORT_DATA(PyExc_PermissionError)
EXPORT_DATA(PyExc_ProcessLookupError)
EXPORT_DATA(PyExc_RecursionError)
EXPORT_DATA(PyExc_ReferenceError)
EXPORT_DATA(PyExc_ResourceWarning)
EXPORT_DATA(PyExc_RuntimeError)
EXPORT_DATA(PyExc_RuntimeWarning)
EXPORT_DATA(PyExc_StopAsyncIteration)
EXPORT_DATA(PyExc_StopIteration)
EXPORT_DATA(PyExc_SyntaxError)
EXPORT_DATA(PyExc_SyntaxWarning)
EXPORT_DATA(PyExc_SystemError)
EXPORT_DATA(PyExc_SystemExit)
EXPORT_DATA(PyExc_TabError)
EXPORT_DATA(PyExc_TimeoutError)
EXPORT_DATA(PyExc_TypeError)
EXPORT_DATA(PyExc_UnboundLocalError)
EXPORT_DATA(PyExc_UnicodeDecodeError)
EXPORT_DATA(PyExc_UnicodeEncodeError)
EXPORT_DATA(PyExc_UnicodeError)
EXPORT_DATA(PyExc_UnicodeTranslateError)
EXPORT_DATA(PyExc_UnicodeWarning)
EXPORT_DATA(PyExc_UserWarning)
EXPORT_DATA(PyExc_ValueError)
EXPORT_DATA(PyExc_Warning)
EXPORT_DATA(PyExc_WindowsError)
EXPORT_DATA(PyExc_ZeroDivisionError)
EXPORT_DATA(PyFilter_Type)
EXPORT_DATA(PyFloat_Type)
EXPORT_DATA(PyFrozenSet_Type)
EXPORT_DATA(PyGetSetDescr_Type)
EXPORT_DATA(PyList_Type)
EXPORT_DATA(PyListIter_Type)
EXPORT_DATA(PyListRevIter_Type)
EXPORT_DATA(PyLong_Type)
EXPORT_DATA(PyLongRangeIter_Type)
EXPORT_DATA(PyMap_Type)
EXPORT_DATA(PyMemberDescr_Type)
EXPORT_DATA(PyMemoryView_Type)
EXPORT_DATA(PyMethodDescr_Type)
EXPORT_DATA(PyModule_Type)
EXPORT_DATA(PyModuleDef_Type)
EXPORT_DATA(PyOS_InputHook)
EXPORT_DATA(PyProperty_Type)
EXPORT_DATA(PyRange_Type)
EXPORT_DATA(PyRangeIter_Type)
EXPORT_DATA(PyReversed_Type)
EXPORT_DATA(PySeqIter_Type)
EXPORT_DATA(PySet_Type)
EXPORT_DATA(PySetIter_Type)
EXPORT_DATA(PySlice_Type)
EXPORT_DATA(PyStructSequence_UnnamedField)
EXPORT_DATA(PySuper_Type)
EXPORT_DATA(PyTraceBack_Type)
EXPORT_DATA(PyTuple_Type)
EXPORT_DATA(PyTupleIter_Type)
EXPORT_DATA(PyType_Type)
EXPORT_DATA(PyUnicode_Type)
EXPORT_DATA(PyUnicodeIter_Type)
EXPORT_DATA(PyWrapperDescr_Type)
EXPORT_DATA(PyZip_Type)
