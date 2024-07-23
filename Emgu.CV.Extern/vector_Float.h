//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of Float
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------


#pragma once
#ifndef EMGU_VECTOR_Float_H
#define EMGU_VECTOR_Float_H

#include "vectors_c.h"

#if 1



//----------------------------------------------------------------------------
//
//  Vector of Float
//
//----------------------------------------------------------------------------
CVAPI(std::vector< float >*) VectorOfFloatCreate();

CVAPI(std::vector< float >*) VectorOfFloatCreateSize(int size);

CVAPI(int) VectorOfFloatGetSize(std::vector< float >* v);

CVAPI(void) VectorOfFloatPush(std::vector< float >* v, float* value);

CVAPI(void) VectorOfFloatPushMulti(std::vector< float >* v, float* values, int count);

CVAPI(void) VectorOfFloatPushVector(std::vector< float >* v, std::vector< float >* other);

CVAPI(void) VectorOfFloatClear(std::vector< float >* v);

CVAPI(void) VectorOfFloatRelease(std::vector< float >** v);

CVAPI(void) VectorOfFloatCopyData(std::vector< float >* v,  float* data);

CVAPI(float*) VectorOfFloatGetStartAddress(std::vector< float >* v);

CVAPI(int64_t) VectorOfFloatGetMemorySize(std::vector< float >* v);

CVAPI(void) VectorOfFloatGetItem(std::vector<  float >* vec, int index,  float* element);

CVAPI(void) VectorOfFloatGetItemPtr(std::vector<  float >* vec, int index,  float** element);

#if true
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfFloat(std::vector< float >* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfFloat(std::vector< float >* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfFloat(std::vector< float >* vec);
#endif

CVAPI(int) VectorOfFloatSizeOfItemInBytes();

#else

static inline CV_NORETURN void throw_no_vector() { CV_Error(cv::Error::StsBadFunc, "The library is compiled without VectorOfFloat support"); }

CVAPI(void*) VectorOfFloatCreate();

CVAPI(void*) VectorOfFloatCreateSize(int size);

CVAPI(int) VectorOfFloatGetSize(void* v);

CVAPI(void) VectorOfFloatPush(void* v, void* value);

CVAPI(void) VectorOfFloatPushMulti(void* v, void* values, int count);

CVAPI(void) VectorOfFloatPushVector(void* v, void* other);

CVAPI(void) VectorOfFloatClear(void* v);

CVAPI(void) VectorOfFloatRelease(void** v);

CVAPI(void) VectorOfFloatCopyData(void* v,  void* data);

CVAPI(void*) VectorOfFloatGetStartAddress(void* v);

CVAPI(void) VectorOfFloatGetItem(void* vec, int index, void* element);

CVAPI(void) VectorOfFloatGetItemPtr(void* vec, int index, void** element);

#if true
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfFloat(void* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfFloat(void* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfFloat(void* vec);
#endif

CVAPI(int) VectorOfFloatSizeOfItemInBytes();
#endif


#endif
