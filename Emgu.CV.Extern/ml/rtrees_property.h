#include "ml_c.h"
CVAPI(int) cveRTreesGetMaxCategories(void* obj);
CVAPI(void) cveRTreesSetMaxCategories(void* obj, int value);     
     
CVAPI(int) cveRTreesGetMaxDepth(void* obj);
CVAPI(void) cveRTreesSetMaxDepth(void* obj, int value);     
     
CVAPI(int) cveRTreesGetMinSampleCount(void* obj);
CVAPI(void) cveRTreesSetMinSampleCount(void* obj, int value);     
     
CVAPI(int) cveRTreesGetCVFolds(void* obj);
CVAPI(void) cveRTreesSetCVFolds(void* obj, int value);     
     
CVAPI(bool) cveRTreesGetUseSurrogates(void* obj);
CVAPI(void) cveRTreesSetUseSurrogates(void* obj, bool value);     
     
CVAPI(bool) cveRTreesGetUse1SERule(void* obj);
CVAPI(void) cveRTreesSetUse1SERule(void* obj, bool value);     
     
CVAPI(bool) cveRTreesGetTruncatePrunedTree(void* obj);
CVAPI(void) cveRTreesSetTruncatePrunedTree(void* obj, bool value);     
     
CVAPI(float) cveRTreesGetRegressionAccuracy(void* obj);
CVAPI(void) cveRTreesSetRegressionAccuracy(void* obj, float value);     
     
CVAPI(bool) cveRTreesGetCalculateVarImportance(void* obj);
CVAPI(void) cveRTreesSetCalculateVarImportance(void* obj, bool value);     
     
CVAPI(int) cveRTreesGetActiveVarCount(void* obj);
CVAPI(void) cveRTreesSetActiveVarCount(void* obj, int value);     
     
CVAPI(void) cveRTreesGetTermCriteria(void* obj, CvTermCriteria* value);
CVAPI(void) cveRTreesSetTermCriteria(void* obj, CvTermCriteria* value);     
     