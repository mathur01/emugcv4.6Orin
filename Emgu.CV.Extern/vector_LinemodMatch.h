//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of LinemodMatch
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------


#pragma once
#ifndef EMGU_VECTOR_LinemodMatch_H
#define EMGU_VECTOR_LinemodMatch_H

#include "vectors_c.h"

#include "rgbd_c.h"

#if defined(HAVE_OPENCV_RGBD)

//----------------------------------------------------------------------------
//
//  Vector of LinemodMatch
//
//----------------------------------------------------------------------------
CVAPI(std::vector< cv::linemod::Match >*) VectorOfLinemodMatchCreate();

CVAPI(std::vector< cv::linemod::Match >*) VectorOfLinemodMatchCreateSize(int size);

CVAPI(int) VectorOfLinemodMatchGetSize(std::vector< cv::linemod::Match >* v);

CVAPI(void) VectorOfLinemodMatchPush(std::vector< cv::linemod::Match >* v, cv::linemod::Match* value);

//CVAPI(void) VectorOfLinemodMatchPushMulti(std::vector< cv::linemod::Match >* v, cv::linemod::Match* values, int count);

CVAPI(void) VectorOfLinemodMatchPushVector(std::vector< cv::linemod::Match >* v, std::vector< cv::linemod::Match >* other);

CVAPI(cv::linemod::Match*) VectorOfLinemodMatchGetStartAddress(std::vector< cv::linemod::Match >* v);

CVAPI(void) VectorOfLinemodMatchClear(std::vector< cv::linemod::Match >* v);

CVAPI(void) VectorOfLinemodMatchRelease(std::vector< cv::linemod::Match >** v);

CVAPI(void) VectorOfLinemodMatchCopyData(std::vector< cv::linemod::Match >* v,  cv::linemod::Match* data);

CVAPI(cv::linemod::Match*) VectorOfLinemodMatchGetStartAddress(std::vector< cv::linemod::Match >* v);

CVAPI(int64_t) VectorOfLinemodMatchGetMemorySize(std::vector< cv::linemod::Match >* v);

CVAPI(void) VectorOfLinemodMatchGetItemPtr(std::vector<  cv::linemod::Match >* vec, int index,  cv::linemod::Match** element);

#if false
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfLinemodMatch(std::vector< cv::linemod::Match >* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfLinemodMatch(std::vector< cv::linemod::Match >* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfLinemodMatch(std::vector< cv::linemod::Match >* vec);
#endif

CVAPI(int) VectorOfLinemodMatchSizeOfItemInBytes();

#else

CVAPI(void *) VectorOfLinemodMatchCreate();

CVAPI(void *) VectorOfLinemodMatchCreateSize(int size);

CVAPI(int) VectorOfLinemodMatchGetSize(void* v);

CVAPI(void) VectorOfLinemodMatchPush(void* v, void* value);

//CVAPI(void) VectorOfLinemodMatchPushMulti(std::vector< cv::linemod::Match >* v, cv::linemod::Match* values, int count);

CVAPI(void) VectorOfLinemodMatchPushVector(void* v, void* other);

CVAPI(void) VectorOfLinemodMatchClear(void* v);

CVAPI(void) VectorOfLinemodMatchRelease(void** v);

CVAPI(void) VectorOfLinemodMatchCopyData(void* v, void* data);

CVAPI(void*) VectorOfLinemodMatchGetStartAddress(void* v);

CVAPI(void) VectorOfLinemodMatchGetItemPtr(void* vec, int index,  void** element);

#if false
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfLinemodMatch(void* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfLinemodMatch(void* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfLinemodMatch(void* vec);
#endif

CVAPI(int) VectorOfLinemodMatchSizeOfItemInBytes();

static inline CV_NORETURN void throw_no_vector() { CV_Error(cv::Error::StsBadFunc, "The library is compiled without VectorOfLinemodMatch support"); }

#endif

#endif