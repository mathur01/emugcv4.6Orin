//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of GpuMat
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------


#pragma once
#ifndef EMGU_VECTOR_GpuMat_H
#define EMGU_VECTOR_GpuMat_H

#include "vectors_c.h"

#include "opencv2/core/cuda.hpp"

#if 1

//----------------------------------------------------------------------------
//
//  Vector of GpuMat
//
//----------------------------------------------------------------------------
CVAPI(std::vector< cv::cuda::GpuMat >*) VectorOfGpuMatCreate();

CVAPI(std::vector< cv::cuda::GpuMat >*) VectorOfGpuMatCreateSize(int size);

CVAPI(int) VectorOfGpuMatGetSize(std::vector< cv::cuda::GpuMat >* v);

CVAPI(void) VectorOfGpuMatPush(std::vector< cv::cuda::GpuMat >* v, cv::cuda::GpuMat* value);

//CVAPI(void) VectorOfGpuMatPushMulti(std::vector< cv::cuda::GpuMat >* v, cv::cuda::GpuMat* values, int count);

CVAPI(void) VectorOfGpuMatPushVector(std::vector< cv::cuda::GpuMat >* v, std::vector< cv::cuda::GpuMat >* other);

CVAPI(cv::cuda::GpuMat*) VectorOfGpuMatGetStartAddress(std::vector< cv::cuda::GpuMat >* v);

CVAPI(void) VectorOfGpuMatClear(std::vector< cv::cuda::GpuMat >* v);

CVAPI(void) VectorOfGpuMatRelease(std::vector< cv::cuda::GpuMat >** v);

CVAPI(void) VectorOfGpuMatCopyData(std::vector< cv::cuda::GpuMat >* v,  cv::cuda::GpuMat* data);

CVAPI(cv::cuda::GpuMat*) VectorOfGpuMatGetStartAddress(std::vector< cv::cuda::GpuMat >* v);

CVAPI(int64_t) VectorOfGpuMatGetMemorySize(std::vector< cv::cuda::GpuMat >* v);

CVAPI(void) VectorOfGpuMatGetItemPtr(std::vector<  cv::cuda::GpuMat >* vec, int index,  cv::cuda::GpuMat** element);

#if true
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfGpuMat(std::vector< cv::cuda::GpuMat >* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfGpuMat(std::vector< cv::cuda::GpuMat >* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfGpuMat(std::vector< cv::cuda::GpuMat >* vec);
#endif

CVAPI(int) VectorOfGpuMatSizeOfItemInBytes();

#else

CVAPI(void *) VectorOfGpuMatCreate();

CVAPI(void *) VectorOfGpuMatCreateSize(int size);

CVAPI(int) VectorOfGpuMatGetSize(void* v);

CVAPI(void) VectorOfGpuMatPush(void* v, void* value);

//CVAPI(void) VectorOfGpuMatPushMulti(std::vector< cv::cuda::GpuMat >* v, cv::cuda::GpuMat* values, int count);

CVAPI(void) VectorOfGpuMatPushVector(void* v, void* other);

CVAPI(void) VectorOfGpuMatClear(void* v);

CVAPI(void) VectorOfGpuMatRelease(void** v);

CVAPI(void) VectorOfGpuMatCopyData(void* v, void* data);

CVAPI(void*) VectorOfGpuMatGetStartAddress(void* v);

CVAPI(void) VectorOfGpuMatGetItemPtr(void* vec, int index,  void** element);

#if true
CVAPI(cv::_InputArray*) cveInputArrayFromVectorOfGpuMat(void* vec);

CVAPI(cv::_OutputArray*) cveOutputArrayFromVectorOfGpuMat(void* vec);

CVAPI(cv::_InputOutputArray*) cveInputOutputArrayFromVectorOfGpuMat(void* vec);
#endif

CVAPI(int) VectorOfGpuMatSizeOfItemInBytes();

static inline CV_NORETURN void throw_no_vector() { CV_Error(cv::Error::StsBadFunc, "The library is compiled without VectorOfGpuMat support"); }

#endif

#endif
