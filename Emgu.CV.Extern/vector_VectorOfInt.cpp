//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of VectorOfInt
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------



#include "vector_VectorOfInt.h"

#if 1



std::vector< std::vector< int > >* VectorOfVectorOfIntCreate() 
{
   return new std::vector< std::vector< int > >(); 
}

std::vector< std::vector< int > >* VectorOfVectorOfIntCreateSize(int size) 
{
   return new std::vector< std::vector< int > >(size); 
}

int VectorOfVectorOfIntGetSize(std::vector< std::vector< int > >* v)
{
   return v->size();
}


void VectorOfVectorOfIntPush(std::vector< std::vector< int > >* v, std::vector< int >* value)
{
   v->push_back(*value);
}

//void VectorOfVectorOfIntPushMulti(std::vector< std::vector< int > >* v,  std::vector< int >* values, int count)
//{
//   VectorPushMulti< std::vector< int > >(v, values, count);
//}

void VectorOfVectorOfIntPushVector(std::vector< std::vector< int > >* v, std::vector< std::vector< int > >* other)
{
   v->insert(v->end(), other->begin(), other->end());
}

void VectorOfVectorOfIntClear(std::vector< std::vector< int > >* v)
{
   v->clear();
}

void VectorOfVectorOfIntRelease(std::vector< std::vector< int > >** v)
{
   delete *v;
   *v = 0;
}

void VectorOfVectorOfIntCopyData(std::vector< std::vector< int > >* v, std::vector< int >* data)
{
   VectorCopyData< std::vector< int > >(v, data);
}

std::vector< int >* VectorOfVectorOfIntGetStartAddress(std::vector< std::vector< int > >* v)
{
   return v->empty() ? NULL : &(*v)[0];
}

int64_t VectorOfVectorOfIntGetMemorySize(std::vector< std::vector< int > >* v)
{
   if (v->empty()) return 0;
   return (int64_t) (v->size() * sizeof(std::vector< int >));
}

void VectorOfVectorOfIntGetItemPtr(std::vector<  std::vector< int > >* vec, int index,  std::vector< int >** element)
{
   *element = &vec->at(index);
}

#if true
cv::_InputArray* cveInputArrayFromVectorOfVectorOfInt(std::vector< std::vector< int > >* vec)
{
   return new cv::_InputArray(*vec);
}

cv::_OutputArray* cveOutputArrayFromVectorOfVectorOfInt(std::vector< std::vector< int > >* vec)
{
   return new cv::_OutputArray(*vec);
}

cv::_InputOutputArray* cveInputOutputArrayFromVectorOfVectorOfInt(std::vector< std::vector< int > >* vec)
{
   return new cv::_InputOutputArray(*vec);
}
#endif

int VectorOfVectorOfIntSizeOfItemInBytes()
{
   return sizeof(std::vector< int >);
}

#else

void * VectorOfVectorOfIntCreate()
{
   throw_no_vector();
}

void * VectorOfVectorOfIntCreateSize(int size)
{
   throw_no_vector();
}

int VectorOfVectorOfIntGetSize(void* v)
{
   throw_no_vector();
}

void VectorOfVectorOfIntPush(void* v, void* value)
{
   throw_no_vector();
}

//CVAPI(void) VectorOfVectorOfIntPushMulti(std::vector< std::vector< int > >* v, std::vector< int >* values, int count);

void VectorOfVectorOfIntPushVector(void* v, void* other)
{
   throw_no_vector();
}

void VectorOfVectorOfIntClear(void* v)
{
   throw_no_vector();
}

void VectorOfVectorOfIntRelease(void** v)
{
   throw_no_vector();
}

void VectorOfVectorOfIntCopyData(void* v, void* data)
{
   throw_no_vector();
}

void* VectorOfVectorOfIntGetStartAddress(void* v)
{
   throw_no_vector();
}

void VectorOfVectorOfIntGetItemPtr(void* vec, int index,  void** element)
{
   throw_no_vector();
}

#if true
cv::_InputArray* cveInputArrayFromVectorOfVectorOfInt(void* vec)
{
   throw_no_vector();
}

cv::_OutputArray* cveOutputArrayFromVectorOfVectorOfInt(void* vec)
{
   throw_no_vector();
}

cv::_InputOutputArray* cveInputOutputArrayFromVectorOfVectorOfInt(void* vec)
{
   throw_no_vector();
}
#endif

int VectorOfVectorOfIntSizeOfItemInBytes()
{
   throw_no_vector();
}


#endif
