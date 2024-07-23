 
   #include "depthai/FrameMetadata_property.h"
void cveFrameMetadataGetCameraName(FrameMetadata* obj, cv::String* val) { *val = obj->getCameraName(); }   
     
int cveFrameMetadataGetSequenceNum(FrameMetadata* obj) { return obj->getSequenceNum(); }   
     
int cveFrameMetadataGetInstanceNum(FrameMetadata* obj) { return obj->getInstanceNum(); }   
     
int cveFrameMetadataGetCategory(FrameMetadata* obj) { return obj->getCategory(); }   
     
unsigned int cveFrameMetadataGetStride(FrameMetadata* obj) { return obj->getStride(); }   
     
unsigned int cveFrameMetadataGetFrameBytesPP(FrameMetadata* obj) { return obj->getFrameBytesPP(); }   
     
unsigned int cveFrameMetadataGetFrameHeight(FrameMetadata* obj) { return obj->getFrameHeight(); }   
     
unsigned int cveFrameMetadataGetFrameWidth(FrameMetadata* obj) { return obj->getFrameWidth(); }   
     
int cveFrameMetadataGetFrameType(FrameMetadata* obj) { return obj->getFrameType(); }   
     
double cveFrameMetadataGetTimestamp(FrameMetadata* obj) { return obj->getTimestamp(); }   
     
bool cveFrameMetadataIsValid(FrameMetadata* obj) { return obj->isValid(); }   
      
  