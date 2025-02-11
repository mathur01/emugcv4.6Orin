//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of VectorOfRect
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------


#pragma once
#ifndef EMGU_VECTOR_VectorOfRect_H
#define EMGU_VECTOR_VectorOfRect_H

#include "vectors_c.h"



#if 1

//----------------------------------------------------------------------------
//
//  Vector of VectorOfRect
//
//----------------------------------------------------------------------------
CVAPI(std::vector< std::vector< cv::Rect > >*) VectorOfVectorOfRectCreate();

CVAPI(std::vector< std::vector< cv::Rect > >*) VectorOfVectorOfRectCreateSize(int size);

CVAPI(int) VectorOfVectorOfRectGetSize(std::vector< std::vector< cv::Rect > >* v);

CVAPI(void) VectorOfVectorOfRectPush(std::vector< std::vector< cv::Rect > >* v, std::vector< cv::Rect >* value);

//CVAPI(void) VectorOfVectorOfRectPushMulti(std::vector< std::vector< cv::Rect > >* v, std::vector< cv::Rect >* values, int count);

CVAPI(void) VectorOfVectorOfRectPushVector(std::vector< std::vector< cv::Rect > >* v, std::vector< std::vector< cv::Rect > >* other);

CVAPI(std::vector< cv::Rect >*) VectorOfVectorOfRectGetStartAddress(std::vector< std::vector< cv::Rect > >* v);

CVAPI(void) VectorOfVectorOfRectClear(std::vector< std::vector< cv::Rect > >* v);

CVAPI(void) VectorOfVectorOfRectRelease(std::vector< std::vector< cv::Rect > >** v);

CVAPI(void) VectorOfVectorOfRectCopyData(std::vector< std::vector< cv::Rect > >* v,  std::vector< cv::Rect >* data);

CVAPI(std::vector< cv::Rect >*) VectorOfVectorOfRectGetStartAddress(std::vector< std::vector< cv::Rect > >* v);

CVAPI(int64_t) VectorOfVectorOfRectGetMemorySize(std::vector< std::vector< cv::Rect > >* v);

CVAPI(void) VectorOfVectorOfRectGetItemPtr(std::vector<  std::vector< cv::Rect > >* vec, int index,  std::vector< cv::Rect >** element);

#if true
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfVectorOfRect(std::vector< std::vector< cv::Rect > >* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfVectorOfRect(std::vector< std::vector< cv::Rect > >* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfVectorOfRect(std::vector< std::vector< cv::Rect > >* vec);
#endif

CVAPI(int) VectorOfVectorOfRectSizeOfItemInBytes();

#else

CVAPI(void *) VectorOfVectorOfRectCreate();

CVAPI(void *) VectorOfVectorOfRectCreateSize(int size);

CVAPI(int) VectorOfVectorOfRectGetSize(void* v);

CVAPI(void) VectorOfVectorOfRectPush(void* v, void* value);

//CVAPI(void) VectorOfVectorOfRectPushMulti(std::vector< std::vector< cv::Rect > >* v, std::vector< cv::Rect >* values, int count);

CVAPI(void) VectorOfVectorOfRectPushVector(void* v, void* other);

CVAPI(void) VectorOfVectorOfRectClear(void* v);

CVAPI(void) VectorOfVectorOfRectRelease(void** v);

CVAPI(void) VectorOfVectorOfRectCopyData(void* v, void* data);

CVAPI(void*) VectorOfVectorOfRectGetStartAddress(void* v);

CVAPI(void) VectorOfVectorOfRectGetItemPtr(void* vec, int index,  void** element);

#if true
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfVectorOfRect(void* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfVectorOfRect(void* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfVectorOfRect(void* vec);
#endif

CVAPI(int) VectorOfVectorOfRectSizeOfItemInBytes();

static inline CV_NORETURN void throw_no_vector() { CV_Error(cv::Error::StsBadFunc, "The library is compiled without VectorOfVectorOfRect support"); }

#endif

#endif
