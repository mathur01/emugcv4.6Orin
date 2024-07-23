 
   #include "depthai/hostDataPacket_property.h"
void cveHostDataPacketGetStreamName(HostDataPacket* obj, cv::String* str) { *str = obj->stream_name; }   
     
int cveHostDataPacketSize(HostDataPacket* obj) { return obj->size(); }   
     
const unsigned char* cveHostDataPacketGetData(HostDataPacket* obj) { return obj->getData(); }   
     
int cveHostDataPacketGetElemSize(HostDataPacket* obj) { return obj->elem_size; }
      
  