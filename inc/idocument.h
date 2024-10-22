/*
    Contains ID related methods
*/

// Project includes
#include "common.h"

// 3rd party includes
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

// Prototypes
class IDocument
{
    public:
                        IDocument                   (char * meow);
                        ~IDocument                  ();
            
    void                showImage                   (cv::Mat &img, std::string title, bool resized=1);
    bool                irClusterCheck              (cv::Mat image, int MaxClusters=120, float p=0.1);
    bool                isInsideRect                (cv::Rect roi, cv::Point point, cv::MatSize image_size);
    float               getUvPercentage             (cv::Mat mat);
    float               getIrBrightness             (cv::Mat irImage);
    cv::Rect            getFrame                    (cv::MatSize imageSize, float p);

    cv::Mat             meow;
};