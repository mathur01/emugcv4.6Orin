#include "ml_c.h"
CVAPI(int) cveEMGetClustersNumber(void* obj);
CVAPI(void) cveEMSetClustersNumber(void* obj, int value);     
     
CVAPI(int) cveEMGetCovarianceMatrixType(void* obj);
CVAPI(void) cveEMSetCovarianceMatrixType(void* obj, int value);     
     
CVAPI(void) cveEMGetTermCriteria(void* obj, CvTermCriteria* value);
CVAPI(void) cveEMSetTermCriteria(void* obj, CvTermCriteria* value);     
     