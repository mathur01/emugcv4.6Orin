#include "video_c.h"
CVAPI(cv::Mat*) cveKalmanFilterGetStatePre(void* obj);
     
CVAPI(cv::Mat*) cveKalmanFilterGetStatePost(void* obj);
     
CVAPI(cv::Mat*) cveKalmanFilterGetTransitionMatrix(void* obj);
     
CVAPI(cv::Mat*) cveKalmanFilterGetControlMatrix(void* obj);
     
CVAPI(cv::Mat*) cveKalmanFilterGetMeasurementMatrix(void* obj);
     
CVAPI(cv::Mat*) cveKalmanFilterGetProcessNoiseCov(void* obj);
     
CVAPI(cv::Mat*) cveKalmanFilterGetMeasurementNoiseCov(void* obj);
     
CVAPI(cv::Mat*) cveKalmanFilterGetErrorCovPre(void* obj);
     
CVAPI(cv::Mat*) cveKalmanFilterGetGain(void* obj);
     
CVAPI(cv::Mat*) cveKalmanFilterGetErrorCovPost(void* obj);
     