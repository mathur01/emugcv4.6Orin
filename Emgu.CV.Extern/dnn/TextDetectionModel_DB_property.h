#include "dnn_c.h"
CVAPI(float) cveTextDetectionModel_DBGetBinaryThreshold(void* obj);
CVAPI(void) cveTextDetectionModel_DBSetBinaryThreshold(void* obj, float value);     
     
CVAPI(float) cveTextDetectionModel_DBGetPolygonThreshold(void* obj);
CVAPI(void) cveTextDetectionModel_DBSetPolygonThreshold(void* obj, float value);     
     
CVAPI(double) cveTextDetectionModel_DBGetUnclipRatio(void* obj);
CVAPI(void) cveTextDetectionModel_DBSetUnclipRatio(void* obj, double value);     
     
CVAPI(int) cveTextDetectionModel_DBGetMaxCandidates(void* obj);
CVAPI(void) cveTextDetectionModel_DBSetMaxCandidates(void* obj, int value);     
     