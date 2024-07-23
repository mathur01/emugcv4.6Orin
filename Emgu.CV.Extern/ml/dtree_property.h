#include "ml_c.h"
CVAPI(int) cveDTreesGetMaxCategories(void* obj);
CVAPI(void) cveDTreesSetMaxCategories(void* obj, int value);     
     
CVAPI(int) cveDTreesGetMaxDepth(void* obj);
CVAPI(void) cveDTreesSetMaxDepth(void* obj, int value);     
     
CVAPI(int) cveDTreesGetMinSampleCount(void* obj);
CVAPI(void) cveDTreesSetMinSampleCount(void* obj, int value);     
     
CVAPI(int) cveDTreesGetCVFolds(void* obj);
CVAPI(void) cveDTreesSetCVFolds(void* obj, int value);     
     
CVAPI(bool) cveDTreesGetUseSurrogates(void* obj);
CVAPI(void) cveDTreesSetUseSurrogates(void* obj, bool value);     
     
CVAPI(bool) cveDTreesGetUse1SERule(void* obj);
CVAPI(void) cveDTreesSetUse1SERule(void* obj, bool value);     
     
CVAPI(bool) cveDTreesGetTruncatePrunedTree(void* obj);
CVAPI(void) cveDTreesSetTruncatePrunedTree(void* obj, bool value);     
     
CVAPI(float) cveDTreesGetRegressionAccuracy(void* obj);
CVAPI(void) cveDTreesSetRegressionAccuracy(void* obj, float value);     
     