#include "face_c.h"
CVAPI(double) cveFacemarkLBFParamsGetShapeOffset(void* obj);
CVAPI(void) cveFacemarkLBFParamsSetShapeOffset(void* obj, double value);     
     
CVAPI(bool) cveFacemarkLBFParamsGetVerbose(void* obj);
CVAPI(void) cveFacemarkLBFParamsSetVerbose(void* obj, bool value);     
     
CVAPI(int) cveFacemarkLBFParamsGetNLandmarks(void* obj);
CVAPI(void) cveFacemarkLBFParamsSetNLandmarks(void* obj, int value);     
     
CVAPI(int) cveFacemarkLBFParamsGetInitShapeN(void* obj);
CVAPI(void) cveFacemarkLBFParamsSetInitShapeN(void* obj, int value);     
     
CVAPI(int) cveFacemarkLBFParamsGetStagesN(void* obj);
CVAPI(void) cveFacemarkLBFParamsSetStagesN(void* obj, int value);     
     
CVAPI(int) cveFacemarkLBFParamsGetTreeN(void* obj);
CVAPI(void) cveFacemarkLBFParamsSetTreeN(void* obj, int value);     
     
CVAPI(int) cveFacemarkLBFParamsGetTreeDepth(void* obj);
CVAPI(void) cveFacemarkLBFParamsSetTreeDepth(void* obj, int value);     
     
CVAPI(double) cveFacemarkLBFParamsGetBaggingOverlap(void* obj);
CVAPI(void) cveFacemarkLBFParamsSetBaggingOverlap(void* obj, double value);     
     
CVAPI(bool) cveFacemarkLBFParamsGetSaveModel(void* obj);
CVAPI(void) cveFacemarkLBFParamsSetSaveModel(void* obj, bool value);     
     
CVAPI(void) cveFacemarkLBFParamsGetCascadeFace(void* obj, cv::String* str);  
CVAPI(void) cveFacemarkLBFParamsSetCascadeFace(void* obj, cv::String* str);  
     
CVAPI(void) cveFacemarkLBFParamsGetModelFile(void* obj, cv::String* str);  
CVAPI(void) cveFacemarkLBFParamsSetModelFile(void* obj, cv::String* str);  
     