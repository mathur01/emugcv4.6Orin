#include "ml_c.h"
CVAPI(int) cveKNearestGetDefaultK(void* obj);
CVAPI(void) cveKNearestSetDefaultK(void* obj, int value);     
     
CVAPI(bool) cveKNearestGetIsClassifier(void* obj);
CVAPI(void) cveKNearestSetIsClassifier(void* obj, bool value);     
     
CVAPI(int) cveKNearestGetEmax(void* obj);
CVAPI(void) cveKNearestSetEmax(void* obj, int value);     
     
CVAPI(int) cveKNearestGetAlgorithmType(void* obj);
CVAPI(void) cveKNearestSetAlgorithmType(void* obj, int value);     
     