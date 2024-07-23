#include "ml_c.h"
CVAPI(int) cveSVMSGDGetType(void* obj);
CVAPI(void) cveSVMSGDSetType(void* obj, int value);     
     
CVAPI(int) cveSVMSGDGetMargin(void* obj);
CVAPI(void) cveSVMSGDSetMargin(void* obj, int value);     
     
CVAPI(float) cveSVMSGDGetMarginRegularization(void* obj);
CVAPI(void) cveSVMSGDSetMarginRegularization(void* obj, float value);     
     
CVAPI(float) cveSVMSGDGetInitialStepSize(void* obj);
CVAPI(void) cveSVMSGDSetInitialStepSize(void* obj, float value);     
     
CVAPI(float) cveSVMSGDGetStepDecreasingPower(void* obj);
CVAPI(void) cveSVMSGDSetStepDecreasingPower(void* obj, float value);     
     
CVAPI(void) cveSVMSGDGetTermCriteria(void* obj, CvTermCriteria* value);
CVAPI(void) cveSVMSGDSetTermCriteria(void* obj, CvTermCriteria* value);     
     