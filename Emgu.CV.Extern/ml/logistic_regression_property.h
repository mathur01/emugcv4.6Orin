#include "ml_c.h"
CVAPI(double) cveLogisticRegressionGetLearningRate(void* obj);
CVAPI(void) cveLogisticRegressionSetLearningRate(void* obj, double value);     
     
CVAPI(int) cveLogisticRegressionGetIterations(void* obj);
CVAPI(void) cveLogisticRegressionSetIterations(void* obj, int value);     
     
CVAPI(int) cveLogisticRegressionGetRegularization(void* obj);
CVAPI(void) cveLogisticRegressionSetRegularization(void* obj, int value);     
     
CVAPI(int) cveLogisticRegressionGetTrainMethod(void* obj);
CVAPI(void) cveLogisticRegressionSetTrainMethod(void* obj, int value);     
     
CVAPI(int) cveLogisticRegressionGetMiniBatchSize(void* obj);
CVAPI(void) cveLogisticRegressionSetMiniBatchSize(void* obj, int value);     
     
CVAPI(void) cveLogisticRegressionGetTermCriteria(void* obj, CvTermCriteria* value);
CVAPI(void) cveLogisticRegressionSetTermCriteria(void* obj, CvTermCriteria* value);     
     