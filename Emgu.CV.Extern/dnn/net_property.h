#include "dnn_c.h"
CVAPI(void) cveNetSetPreferableBackend(void* obj, int value);     
     
CVAPI(void) cveNetSetPreferableTarget(void* obj, int value);     
     
CVAPI(void) cveNetEnableFusion(void* obj, bool value);     
     
CVAPI(bool) cveNetEmpty(void* obj);  
     
CVAPI(void) cveNetSetHalideScheduler(void* obj, cv::String* str);  
     