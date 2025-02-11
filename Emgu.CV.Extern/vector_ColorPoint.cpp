//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of ColorPoint
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------



#include "vector_ColorPoint.h"

#if defined(HAVE_OPENCV_VIDEOIO)



std::vector< ColorPoint >* VectorOfColorPointCreate() 
{ 
   return new std::vector< ColorPoint >(); 
}

std::vector< ColorPoint >* VectorOfColorPointCreateSize(int size) 
{ 
   return new std::vector< ColorPoint >(size); 
}

int VectorOfColorPointGetSize(std::vector< ColorPoint >* v)
{
   return v->size();
}

void VectorOfColorPointPush(std::vector< ColorPoint >* v, ColorPoint* value)
{
   v->push_back(*value);
}

void VectorOfColorPointPushMulti(std::vector< ColorPoint >* v,  ColorPoint* values, int count)
{
   VectorPushMulti< ColorPoint >(v, values, count);
}

void VectorOfColorPointPushVector(std::vector< ColorPoint >* v, std::vector< ColorPoint >* other)
{  
   VectorOfColorPointPushMulti(v,  &(*other)[0], other->size());
}

void VectorOfColorPointClear(std::vector< ColorPoint >* v)
{
   v->clear();
}

void VectorOfColorPointRelease(std::vector< ColorPoint >** v)
{
   delete *v;
   *v = 0;
}

void VectorOfColorPointCopyData(std::vector< ColorPoint >* v, ColorPoint* data)
{
   VectorCopyData< ColorPoint >(v, data);
}

ColorPoint* VectorOfColorPointGetStartAddress(std::vector< ColorPoint >* v)
{
   return v->empty() ? NULL : &(*v)[0];
}

int64_t VectorOfColorPointGetMemorySize(std::vector< ColorPoint >* v)
{
   if (v->empty()) return 0;
   return (int64_t) (v->size() * sizeof(ColorPoint));
}

void VectorOfColorPointGetItem(std::vector<  ColorPoint >* vec, int index,  ColorPoint * element)
{
   *element = vec->at(index);
}

void VectorOfColorPointGetItemPtr(std::vector<  ColorPoint >* vec, int index,  ColorPoint** element)
{ 
	*element = &vec->at(index);
}

#if true
cv::_InputArray* cveInputArrayFromVectorOfColorPoint(std::vector< ColorPoint >* vec)
{
   return new cv::_InputArray(*vec);
}

cv::_OutputArray* cveOutputArrayFromVectorOfColorPoint(std::vector< ColorPoint >* vec)
{
   return new cv::_OutputArray(*vec);
}

cv::_InputOutputArray* cveInputOutputArrayFromVectorOfColorPoint(std::vector< ColorPoint >* vec)
{
   return new cv::_InputOutputArray(*vec);
}
#endif

int VectorOfColorPointSizeOfItemInBytes()
{
   return sizeof(ColorPoint);
}

#else

void* VectorOfColorPointCreate()
{
  throw_no_vector();
}

void* VectorOfColorPointCreateSize(int size)
{
  throw_no_vector();
}

int VectorOfColorPointGetSize(void* v)
{
  throw_no_vector();
}

void VectorOfColorPointPush(void* v, void* value)
{
  throw_no_vector();
}

void VectorOfColorPointPushMulti(void* v, void* values, int count)
{
  throw_no_vector();
}

void VectorOfColorPointPushVector(void* v, void* other)
{
  throw_no_vector();
}

void VectorOfColorPointClear(void* v)
{
  throw_no_vector();
}

void VectorOfColorPointRelease(void** v)
{
  throw_no_vector();
}

void VectorOfColorPointCopyData(void* v,  void* data)
{
  throw_no_vector();
}

void* VectorOfColorPointGetStartAddress(void* v)
{
  throw_no_vector();
}

void VectorOfColorPointGetItem(void* vec, int index, void* element)
{
  throw_no_vector();
}

void VectorOfColorPointGetItemPtr(void* vec, int index, void** element)
{
  throw_no_vector();
}

#if true
cv::_InputArray* cveInputArrayFromVectorOfColorPoint(void* vec)
{
  throw_no_vector();
}

cv::_OutputArray* cveOutputArrayFromVectorOfColorPoint(void* vec)
{
  throw_no_vector();
}

cv::_InputOutputArray* cveInputOutputArrayFromVectorOfColorPoint(void* vec)
{
  throw_no_vector();
}
#endif
 
int VectorOfColorPointSizeOfItemInBytes()
{
  throw_no_vector();
}

#endif
