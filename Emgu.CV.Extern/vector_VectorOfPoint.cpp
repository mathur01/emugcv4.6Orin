//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of VectorOfPoint
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------



#include "vector_VectorOfPoint.h"

#if 1



std::vector< std::vector< cv::Point > >* VectorOfVectorOfPointCreate() 
{
   return new std::vector< std::vector< cv::Point > >(); 
}

std::vector< std::vector< cv::Point > >* VectorOfVectorOfPointCreateSize(int size) 
{
   return new std::vector< std::vector< cv::Point > >(size); 
}

int VectorOfVectorOfPointGetSize(std::vector< std::vector< cv::Point > >* v)
{
   return v->size();
}


void VectorOfVectorOfPointPush(std::vector< std::vector< cv::Point > >* v, std::vector< cv::Point >* value)
{
   v->push_back(*value);
}

//void VectorOfVectorOfPointPushMulti(std::vector< std::vector< cv::Point > >* v,  std::vector< cv::Point >* values, int count)
//{
//   VectorPushMulti< std::vector< cv::Point > >(v, values, count);
//}

void VectorOfVectorOfPointPushVector(std::vector< std::vector< cv::Point > >* v, std::vector< std::vector< cv::Point > >* other)
{
   v->insert(v->end(), other->begin(), other->end());
}

void VectorOfVectorOfPointClear(std::vector< std::vector< cv::Point > >* v)
{
   v->clear();
}

void VectorOfVectorOfPointRelease(std::vector< std::vector< cv::Point > >** v)
{
   delete *v;
   *v = 0;
}

void VectorOfVectorOfPointCopyData(std::vector< std::vector< cv::Point > >* v, std::vector< cv::Point >* data)
{
   VectorCopyData< std::vector< cv::Point > >(v, data);
}

std::vector< cv::Point >* VectorOfVectorOfPointGetStartAddress(std::vector< std::vector< cv::Point > >* v)
{
   return v->empty() ? NULL : &(*v)[0];
}

int64_t VectorOfVectorOfPointGetMemorySize(std::vector< std::vector< cv::Point > >* v)
{
   if (v->empty()) return 0;
   return (int64_t) (v->size() * sizeof(std::vector< cv::Point >));
}

void VectorOfVectorOfPointGetItemPtr(std::vector<  std::vector< cv::Point > >* vec, int index,  std::vector< cv::Point >** element)
{
   *element = &vec->at(index);
}

#if true
cv::_InputArray* cveInputArrayFromVectorOfVectorOfPoint(std::vector< std::vector< cv::Point > >* vec)
{
   return new cv::_InputArray(*vec);
}

cv::_OutputArray* cveOutputArrayFromVectorOfVectorOfPoint(std::vector< std::vector< cv::Point > >* vec)
{
   return new cv::_OutputArray(*vec);
}

cv::_InputOutputArray* cveInputOutputArrayFromVectorOfVectorOfPoint(std::vector< std::vector< cv::Point > >* vec)
{
   return new cv::_InputOutputArray(*vec);
}
#endif

int VectorOfVectorOfPointSizeOfItemInBytes()
{
   return sizeof(std::vector< cv::Point >);
}

#else

void * VectorOfVectorOfPointCreate()
{
   throw_no_vector();
}

void * VectorOfVectorOfPointCreateSize(int size)
{
   throw_no_vector();
}

int VectorOfVectorOfPointGetSize(void* v)
{
   throw_no_vector();
}

void VectorOfVectorOfPointPush(void* v, void* value)
{
   throw_no_vector();
}

//CVAPI(void) VectorOfVectorOfPointPushMulti(std::vector< std::vector< cv::Point > >* v, std::vector< cv::Point >* values, int count);

void VectorOfVectorOfPointPushVector(void* v, void* other)
{
   throw_no_vector();
}

void VectorOfVectorOfPointClear(void* v)
{
   throw_no_vector();
}

void VectorOfVectorOfPointRelease(void** v)
{
   throw_no_vector();
}

void VectorOfVectorOfPointCopyData(void* v, void* data)
{
   throw_no_vector();
}

void* VectorOfVectorOfPointGetStartAddress(void* v)
{
   throw_no_vector();
}

void VectorOfVectorOfPointGetItemPtr(void* vec, int index,  void** element)
{
   throw_no_vector();
}

#if true
cv::_InputArray* cveInputArrayFromVectorOfVectorOfPoint(void* vec)
{
   throw_no_vector();
}

cv::_OutputArray* cveOutputArrayFromVectorOfVectorOfPoint(void* vec)
{
   throw_no_vector();
}

cv::_InputOutputArray* cveInputOutputArrayFromVectorOfVectorOfPoint(void* vec)
{
   throw_no_vector();
}
#endif

int VectorOfVectorOfPointSizeOfItemInBytes()
{
   throw_no_vector();
}


#endif
