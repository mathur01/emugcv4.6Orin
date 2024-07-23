#include "ml_c.h"
CVAPI(int) cveBoostGetMaxCategories(void* obj);
CVAPI(void) cveBoostSetMaxCategories(void* obj, int value);     
     
CVAPI(int) cveBoostGetMaxDepth(void* obj);
CVAPI(void) cveBoostSetMaxDepth(void* obj, int value);     
     
CVAPI(int) cveBoostGetMinSampleCount(void* obj);
CVAPI(void) cveBoostSetMinSampleCount(void* obj, int value);     
     
CVAPI(int) cveBoostGetCVFolds(void* obj);
CVAPI(void) cveBoostSetCVFolds(void* obj, int value);     
     
CVAPI(bool) cveBoostGetUseSurrogates(void* obj);
CVAPI(void) cveBoostSetUseSurrogates(void* obj, bool value);     
     
CVAPI(bool) cveBoostGetUse1SERule(void* obj);
CVAPI(void) cveBoostSetUse1SERule(void* obj, bool value);     
     
CVAPI(bool) cveBoostGetTruncatePrunedTree(void* obj);
CVAPI(void) cveBoostSetTruncatePrunedTree(void* obj, bool value);     
     
CVAPI(float) cveBoostGetRegressionAccuracy(void* obj);
CVAPI(void) cveBoostSetRegressionAccuracy(void* obj, float value);     
     