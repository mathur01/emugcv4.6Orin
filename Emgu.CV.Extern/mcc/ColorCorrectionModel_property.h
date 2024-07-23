#include "mcc_c.h"
CVAPI(void) cveColorCorrectionModelSetCcmType(void* obj, cv::ccm::CCM_TYPE value);     
     
CVAPI(double) cveColorCorrectionModelGetLoss(void* obj);  
     
CVAPI(void) cveColorCorrectionModelSetDistanceType(void* obj, cv::ccm::DISTANCE_TYPE value);     
     
CVAPI(void) cveColorCorrectionModelSetLinearType(void* obj, cv::ccm::LINEAR_TYPE value);     
     
CVAPI(void) cveColorCorrectionModelSetLinearGamma(void* obj, double value);     
     
CVAPI(void) cveColorCorrectionModelSetLinearDegree(void* obj, int value);     
     
CVAPI(void) cveColorCorrectionModelSetWeightCoeff(void* obj, double value);     
     
CVAPI(void) cveColorCorrectionModelSetMaxCount(void* obj, int value);     
     