#include "objdetect_c.h"
CVAPI(void) cveFaceDetectorYNSetScoreThreshold(void* obj, float value);     
     
CVAPI(void) cveFaceDetectorYNSetNMSThreshold(void* obj, float value);     
     
CVAPI(void) cveFaceDetectorYNSetTopK(void* obj, int value);     
     
CVAPI(void) cveFaceDetectorYNGetInputSize(void* obj, CvSize* value);
CVAPI(void) cveFaceDetectorYNSetInputSize(void* obj, CvSize* value);     
     