#include "rgbd_c.h"
CVAPI(int) cveMatchGetX(void* obj);
CVAPI(void) cveMatchSetX(void* obj, int value);     
     
CVAPI(int) cveMatchGetY(void* obj);
CVAPI(void) cveMatchSetY(void* obj, int value);     
     
CVAPI(float) cveMatchGetSimilarity(void* obj);
CVAPI(void) cveMatchSetSimilarity(void* obj, float value);     
     
CVAPI(int) cveMatchGetTemplateId(void* obj);
CVAPI(void) cveMatchSetTemplateId(void* obj, int value);     
     
CVAPI(void) cveMatchGetclass_id(void* obj, cv::String* str);  
CVAPI(void) cveMatchSetclass_id(void* obj, cv::String* str);  
     