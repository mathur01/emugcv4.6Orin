//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of Point
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------



#include "vector_Point.h"

#if 1



std::vector< cv::Point >* VectorOfPointCreate() 
{ 
   return new std::vector< cv::Point >(); 
}

std::vector< cv::Point >* VectorOfPointCreateSize(int size) 
{ 
   return new std::vector< cv::Point >(size); 
}

int VectorOfPointGetSize(std::vector< cv::Point >* v)
{
   return v->size();
}

void VectorOfPointPush(std::vector< cv::Point >* v, cv::Point* value)
{
   v->push_back(*value);
}

void VectorOfPointPushMulti(std::vector< cv::Point >* v,  cv::Point* values, int count)
{
   VectorPushMulti< cv::Point >(v, values, count);
}

void VectorOfPointPushVector(std::vector< cv::Point >* v, std::vector< cv::Point >* other)
{  
   VectorOfPointPushMulti(v,  &(*other)[0], other->size());
}

void VectorOfPointClear(std::vector< cv::Point >* v)
{
   v->clear();
}

void VectorOfPointRelease(std::vector< cv::Point >** v)
{
   delete *v;
   *v = 0;
}

void VectorOfPointCopyData(std::vector< cv::Point >* v, cv::Point* data)
{
   VectorCopyData< cv::Point >(v, data);
}

cv::Point* VectorOfPointGetStartAddress(std::vector< cv::Point >* v)
{
   return v->empty() ? NULL : &(*v)[0];
}

int64_t VectorOfPointGetMemorySize(std::vector< cv::Point >* v)
{
   if (v->empty()) return 0;
   return (int64_t) (v->size() * sizeof(cv::Point));
}

void VectorOfPointGetItem(std::vector<  cv::Point >* vec, int index,  cv::Point * element)
{
   *element = vec->at(index);
}

void VectorOfPointGetItemPtr(std::vector<  cv::Point >* vec, int index,  cv::Point** element)
{ 
	*element = &vec->at(index);
}

#if true
cv::_InputArray* cveInputArrayFromVectorOfPoint(std::vector< cv::Point >* vec)
{
   return new cv::_InputArray(*vec);
}

cv::_OutputArray* cveOutputArrayFromVectorOfPoint(std::vector< cv::Point >* vec)
{
   return new cv::_OutputArray(*vec);
}

cv::_InputOutputArray* cveInputOutputArrayFromVectorOfPoint(std::vector< cv::Point >* vec)
{
   return new cv::_InputOutputArray(*vec);
}
#endif

int VectorOfPointSizeOfItemInBytes()
{
   return sizeof(cv::Point);
}

#else

void* VectorOfPointCreate()
{
  throw_no_vector();
}

void* VectorOfPointCreateSize(int size)
{
  throw_no_vector();
}

int VectorOfPointGetSize(void* v)
{
  throw_no_vector();
}

void VectorOfPointPush(void* v, void* value)
{
  throw_no_vector();
}

void VectorOfPointPushMulti(void* v, void* values, int count)
{
  throw_no_vector();
}

void VectorOfPointPushVector(void* v, void* other)
{
  throw_no_vector();
}

void VectorOfPointClear(void* v)
{
  throw_no_vector();
}

void VectorOfPointRelease(void** v)
{
  throw_no_vector();
}

void VectorOfPointCopyData(void* v,  void* data)
{
  throw_no_vector();
}

void* VectorOfPointGetStartAddress(void* v)
{
  throw_no_vector();
}

void VectorOfPointGetItem(void* vec, int index, void* element)
{
  throw_no_vector();
}

void VectorOfPointGetItemPtr(void* vec, int index, void** element)
{
  throw_no_vector();
}

#if true
cv::_InputArray* cveInputArrayFromVectorOfPoint(void* vec)
{
  throw_no_vector();
}

cv::_OutputArray* cveOutputArrayFromVectorOfPoint(void* vec)
{
  throw_no_vector();
}

cv::_InputOutputArray* cveInputOutputArrayFromVectorOfPoint(void* vec)
{
  throw_no_vector();
}
#endif
 
int VectorOfPointSizeOfItemInBytes()
{
  throw_no_vector();
}

#endif
