//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of VideoCapture
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------



#include "vector_VideoCapture.h"

#if defined(HAVE_OPENCV_VIDEOIO)



std::vector< cv::VideoCapture >* VectorOfVideoCaptureCreate() 
{
   return new std::vector< cv::VideoCapture >(); 
}

std::vector< cv::VideoCapture >* VectorOfVideoCaptureCreateSize(int size) 
{
   return new std::vector< cv::VideoCapture >(size); 
}

int VectorOfVideoCaptureGetSize(std::vector< cv::VideoCapture >* v)
{
   return v->size();
}


void VectorOfVideoCapturePush(std::vector< cv::VideoCapture >* v, cv::VideoCapture* value)
{
   v->push_back(*value);
}

//void VectorOfVideoCapturePushMulti(std::vector< cv::VideoCapture >* v,  cv::VideoCapture* values, int count)
//{
//   VectorPushMulti< cv::VideoCapture >(v, values, count);
//}

void VectorOfVideoCapturePushVector(std::vector< cv::VideoCapture >* v, std::vector< cv::VideoCapture >* other)
{
   v->insert(v->end(), other->begin(), other->end());
}

void VectorOfVideoCaptureClear(std::vector< cv::VideoCapture >* v)
{
   v->clear();
}

void VectorOfVideoCaptureRelease(std::vector< cv::VideoCapture >** v)
{
   delete *v;
   *v = 0;
}

void VectorOfVideoCaptureCopyData(std::vector< cv::VideoCapture >* v, cv::VideoCapture* data)
{
   VectorCopyData< cv::VideoCapture >(v, data);
}

cv::VideoCapture* VectorOfVideoCaptureGetStartAddress(std::vector< cv::VideoCapture >* v)
{
   return v->empty() ? NULL : &(*v)[0];
}

int64_t VectorOfVideoCaptureGetMemorySize(std::vector< cv::VideoCapture >* v)
{
   if (v->empty()) return 0;
   return (int64_t) (v->size() * sizeof(cv::VideoCapture));
}

void VectorOfVideoCaptureGetItemPtr(std::vector<  cv::VideoCapture >* vec, int index,  cv::VideoCapture** element)
{
   *element = &vec->at(index);
}

#if false
cv::_InputArray* cveInputArrayFromVectorOfVideoCapture(std::vector< cv::VideoCapture >* vec)
{
   return new cv::_InputArray(*vec);
}

cv::_OutputArray* cveOutputArrayFromVectorOfVideoCapture(std::vector< cv::VideoCapture >* vec)
{
   return new cv::_OutputArray(*vec);
}

cv::_InputOutputArray* cveInputOutputArrayFromVectorOfVideoCapture(std::vector< cv::VideoCapture >* vec)
{
   return new cv::_InputOutputArray(*vec);
}
#endif

int VectorOfVideoCaptureSizeOfItemInBytes()
{
   return sizeof(cv::VideoCapture);
}

#else

void * VectorOfVideoCaptureCreate()
{
   throw_no_vector();
}

void * VectorOfVideoCaptureCreateSize(int size)
{
   throw_no_vector();
}

int VectorOfVideoCaptureGetSize(void* v)
{
   throw_no_vector();
}

void VectorOfVideoCapturePush(void* v, void* value)
{
   throw_no_vector();
}

//CVAPI(void) VectorOfVideoCapturePushMulti(std::vector< cv::VideoCapture >* v, cv::VideoCapture* values, int count);

void VectorOfVideoCapturePushVector(void* v, void* other)
{
   throw_no_vector();
}

void VectorOfVideoCaptureClear(void* v)
{
   throw_no_vector();
}

void VectorOfVideoCaptureRelease(void** v)
{
   throw_no_vector();
}

void VectorOfVideoCaptureCopyData(void* v, void* data)
{
   throw_no_vector();
}

void* VectorOfVideoCaptureGetStartAddress(void* v)
{
   throw_no_vector();
}

void VectorOfVideoCaptureGetItemPtr(void* vec, int index,  void** element)
{
   throw_no_vector();
}

#if false
cv::_InputArray* cveInputArrayFromVectorOfVideoCapture(void* vec)
{
   throw_no_vector();
}

cv::_OutputArray* cveOutputArrayFromVectorOfVideoCapture(void* vec)
{
   throw_no_vector();
}

cv::_InputOutputArray* cveInputOutputArrayFromVectorOfVideoCapture(void* vec)
{
   throw_no_vector();
}
#endif

int VectorOfVideoCaptureSizeOfItemInBytes()
{
   throw_no_vector();
}


#endif