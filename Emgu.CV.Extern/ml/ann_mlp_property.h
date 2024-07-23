#include "ml_c.h"
CVAPI(void) cveANN_MLPGetTermCriteria(void* obj, CvTermCriteria* value);
CVAPI(void) cveANN_MLPSetTermCriteria(void* obj, CvTermCriteria* value);     
     
CVAPI(double) cveANN_MLPGetBackpropWeightScale(void* obj);
CVAPI(void) cveANN_MLPSetBackpropWeightScale(void* obj, double value);     
     
CVAPI(double) cveANN_MLPGetBackpropMomentumScale(void* obj);
CVAPI(void) cveANN_MLPSetBackpropMomentumScale(void* obj, double value);     
     
CVAPI(double) cveANN_MLPGetRpropDW0(void* obj);
CVAPI(void) cveANN_MLPSetRpropDW0(void* obj, double value);     
     
CVAPI(double) cveANN_MLPGetRpropDWPlus(void* obj);
CVAPI(void) cveANN_MLPSetRpropDWPlus(void* obj, double value);     
     
CVAPI(double) cveANN_MLPGetRpropDWMinus(void* obj);
CVAPI(void) cveANN_MLPSetRpropDWMinus(void* obj, double value);     
     
CVAPI(double) cveANN_MLPGetRpropDWMin(void* obj);
CVAPI(void) cveANN_MLPSetRpropDWMin(void* obj, double value);     
     
CVAPI(double) cveANN_MLPGetRpropDWMax(void* obj);
CVAPI(void) cveANN_MLPSetRpropDWMax(void* obj, double value);     
     
CVAPI(double) cveANN_MLPGetAnnealInitialT(void* obj);
CVAPI(void) cveANN_MLPSetAnnealInitialT(void* obj, double value);     
     
CVAPI(double) cveANN_MLPGetAnnealFinalT(void* obj);
CVAPI(void) cveANN_MLPSetAnnealFinalT(void* obj, double value);     
     
CVAPI(double) cveANN_MLPGetAnnealCoolingRatio(void* obj);
CVAPI(void) cveANN_MLPSetAnnealCoolingRatio(void* obj, double value);     
     
CVAPI(int) cveANN_MLPGetAnnealItePerStep(void* obj);
CVAPI(void) cveANN_MLPSetAnnealItePerStep(void* obj, int value);     
     