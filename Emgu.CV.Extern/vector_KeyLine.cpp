//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of KeyLine
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------



#include "vector_KeyLine.h"

#if defined(HAVE_OPENCV_LINE_DESCRIPTOR)



std::vector< cv::line_descriptor::KeyLine >* VectorOfKeyLineCreate() 
{ 
   return new std::vector< cv::line_descriptor::KeyLine >(); 
}

std::vector< cv::line_descriptor::KeyLine >* VectorOfKeyLineCreateSize(int size) 
{ 
   return new std::vector< cv::line_descriptor::KeyLine >(size); 
}

int VectorOfKeyLineGetSize(std::vector< cv::line_descriptor::KeyLine >* v)
{
   return v->size();
}

void VectorOfKeyLinePush(std::vector< cv::line_descriptor::KeyLine >* v, cv::line_descriptor::KeyLine* value)
{
   v->push_back(*value);
}

void VectorOfKeyLinePushMulti(std::vector< cv::line_descriptor::KeyLine >* v,  cv::line_descriptor::KeyLine* values, int count)
{
   VectorPushMulti< cv::line_descriptor::KeyLine >(v, values, count);
}

void VectorOfKeyLinePushVector(std::vector< cv::line_descriptor::KeyLine >* v, std::vector< cv::line_descriptor::KeyLine >* other)
{  
   VectorOfKeyLinePushMulti(v,  &(*other)[0], other->size());
}

void VectorOfKeyLineClear(std::vector< cv::line_descriptor::KeyLine >* v)
{
   v->clear();
}

void VectorOfKeyLineRelease(std::vector< cv::line_descriptor::KeyLine >** v)
{
   delete *v;
   *v = 0;
}

void VectorOfKeyLineCopyData(std::vector< cv::line_descriptor::KeyLine >* v, cv::line_descriptor::KeyLine* data)
{
   VectorCopyData< cv::line_descriptor::KeyLine >(v, data);
}

cv::line_descriptor::KeyLine* VectorOfKeyLineGetStartAddress(std::vector< cv::line_descriptor::KeyLine >* v)
{
   return v->empty() ? NULL : &(*v)[0];
}

int64_t VectorOfKeyLineGetMemorySize(std::vector< cv::line_descriptor::KeyLine >* v)
{
   if (v->empty()) return 0;
   return (int64_t) (v->size() * sizeof(cv::line_descriptor::KeyLine));
}

void VectorOfKeyLineGetItem(std::vector<  cv::line_descriptor::KeyLine >* vec, int index,  cv::line_descriptor::KeyLine * element)
{
   *element = vec->at(index);
}

void VectorOfKeyLineGetItemPtr(std::vector<  cv::line_descriptor::KeyLine >* vec, int index,  cv::line_descriptor::KeyLine** element)
{ 
	*element = &vec->at(index);
}

#if false
cv::_InputArray* cveInputArrayFromVectorOfKeyLine(std::vector< cv::line_descriptor::KeyLine >* vec)
{
   return new cv::_InputArray(*vec);
}

cv::_OutputArray* cveOutputArrayFromVectorOfKeyLine(std::vector< cv::line_descriptor::KeyLine >* vec)
{
   return new cv::_OutputArray(*vec);
}

cv::_InputOutputArray* cveInputOutputArrayFromVectorOfKeyLine(std::vector< cv::line_descriptor::KeyLine >* vec)
{
   return new cv::_InputOutputArray(*vec);
}
#endif

int VectorOfKeyLineSizeOfItemInBytes()
{
   return sizeof(cv::line_descriptor::KeyLine);
}

#else

void* VectorOfKeyLineCreate()
{
  throw_no_vector();
}

void* VectorOfKeyLineCreateSize(int size)
{
  throw_no_vector();
}

int VectorOfKeyLineGetSize(void* v)
{
  throw_no_vector();
}

void VectorOfKeyLinePush(void* v, void* value)
{
  throw_no_vector();
}

void VectorOfKeyLinePushMulti(void* v, void* values, int count)
{
  throw_no_vector();
}

void VectorOfKeyLinePushVector(void* v, void* other)
{
  throw_no_vector();
}

void VectorOfKeyLineClear(void* v)
{
  throw_no_vector();
}

void VectorOfKeyLineRelease(void** v)
{
  throw_no_vector();
}

void VectorOfKeyLineCopyData(void* v,  void* data)
{
  throw_no_vector();
}

void* VectorOfKeyLineGetStartAddress(void* v)
{
  throw_no_vector();
}

void VectorOfKeyLineGetItem(void* vec, int index, void* element)
{
  throw_no_vector();
}

void VectorOfKeyLineGetItemPtr(void* vec, int index, void** element)
{
  throw_no_vector();
}

#if false
cv::_InputArray* cveInputArrayFromVectorOfKeyLine(void* vec)
{
  throw_no_vector();
}

cv::_OutputArray* cveOutputArrayFromVectorOfKeyLine(void* vec)
{
  throw_no_vector();
}

cv::_InputOutputArray* cveInputOutputArrayFromVectorOfKeyLine(void* vec)
{
  throw_no_vector();
}
#endif
 
int VectorOfKeyLineSizeOfItemInBytes()
{
  throw_no_vector();
}

#endif