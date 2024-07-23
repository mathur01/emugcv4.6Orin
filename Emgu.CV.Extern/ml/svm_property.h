#include "ml_c.h"
CVAPI(int) cveSVMGetType(void* obj);
CVAPI(void) cveSVMSetType(void* obj, int value);     
     
CVAPI(double) cveSVMGetGamma(void* obj);
CVAPI(void) cveSVMSetGamma(void* obj, double value);     
     
CVAPI(double) cveSVMGetCoef0(void* obj);
CVAPI(void) cveSVMSetCoef0(void* obj, double value);     
     
CVAPI(double) cveSVMGetDegree(void* obj);
CVAPI(void) cveSVMSetDegree(void* obj, double value);     
     
CVAPI(double) cveSVMGetC(void* obj);
CVAPI(void) cveSVMSetC(void* obj, double value);     
     
CVAPI(double) cveSVMGetNu(void* obj);
CVAPI(void) cveSVMSetNu(void* obj, double value);     
     
CVAPI(double) cveSVMGetP(void* obj);
CVAPI(void) cveSVMSetP(void* obj, double value);     
     
CVAPI(void) cveSVMSetKernel(void* obj, int value);     
     
CVAPI(void) cveSVMGetTermCriteria(void* obj, CvTermCriteria* value);
CVAPI(void) cveSVMSetTermCriteria(void* obj, CvTermCriteria* value);     
     
CVAPI(int) cveSVMGetKernelType(void* obj);  
     