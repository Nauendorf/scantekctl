/*
    Contains ID related methods
*/

// Library includes
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

// Project includes
#include "common.h"

// Prototypes
void            showImage               (cv::Mat &img, std::string title, bool resized=1);
bool            irClusterCheck          (cv::Mat image, int MaxClusters=180, float p=0.1);
bool            isInsideRect            (cv::Rect roi, cv::Point point, cv::MatSize image_size);
float           getUvPercentage         (const cv::Mat& mat);
float           getIrBrightness         (cv::Mat irImage);
cv::Rect        getFrame                (cv::MatSize imageSize, float p);