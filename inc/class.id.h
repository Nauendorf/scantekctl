// Library includes
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <map>

// Project includes
#include "../inc/common.h"

// Prototypes
void            showImage               (cv::Mat &img, std::string title, bool resized=1);
bool            irClusterCheck          (cv::Mat image, int MaxClusters=180, float p=0.1);
cv::Rect        getFrame                (cv::MatSize imageSize, float p);
bool            isInsideRect            (cv::Rect roi, cv::Point point, cv::MatSize image_size);
float           getUvPercentage         (const cv::Mat& mat);
float           getIrBrightness         (cv::Mat irImage);