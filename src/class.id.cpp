#include "../inc/class.id.h"

class Document
{
    public:
    Document(){}
    ~Document(){}

    cv::Rect getFrame(cv::MatSize imageSize, float p)
    {
        int height      = imageSize[0];
        int width       = imageSize[1];
        float padTop    = height * p;
        float padLeft   = width * p;
        float newHeight = height - (padTop * 2);
        float newWidth  = width - (padLeft * 2);
        cv::Rect frameRect(padTop, padLeft, newWidth, newHeight);
        return frameRect;
    }  

    // Counts clusters on the ir image and tests whether cluster count exceeds our MaxClusters threashold
    // [ int MaxClusters ] Number of clusters that best distinguishes blank from legitimate ir layers
    // [ float p ] defines frame size based on percentage smaller than image dimensions
    bool irClusterCheck(cv::Mat image, int MaxClusters, float p)
    {
        cv::Mat framed;  cv::Mat m;  std::map<int,int> clusters;
        cv::Rect frameRect = getFrame(image.size, p);
        cv::medianBlur(image(frameRect), m, 31);

        for (size_t i=0; i<m.total(); i++)
        {
            cv::Vec3b v = m.at<cv::Vec3b>(i);
            int c = (v[0] << 16) | (v[1] << 8) | (v[2]);
            if (clusters.find(c) != clusters.end())
            {   clusters[c] ++;    }
            else
            {   clusters[c] = 0;   }
        }

        for (std::map<int,int>::iterator it=clusters.begin(); it != clusters.end(); )
        {
            if (it->second < 50)
            {   it = clusters.erase(it);   }
            else
            {   it++;   }
        }

        if (clusters.size() < MaxClusters)
        {
            return 1;
        }
        return 0;
    }

    bool isInsideRect(cv::Rect roi, cv::Point point, cv::MatSize image_size)
    {
        int th = image_size[0];
        int tw = image_size[1];    
        float maxh = roi.y;
        float minh = (roi.height + roi.y);
        float maxw = roi.x + roi.width;
        float minw = roi.x;
        // std::cout << "th  " << th << "\n";
        // std::cout << "tw  " << tw << "\n";
        // std::cout << "maxh  " << maxh << "\n";
        // std::cout << "minh  " << minh << "\n";
        // std::cout << "maxw  " << maxw << "\n";
        // std::cout << "minw  " << minw << "\n";
        // std::cout << "point y  " << point.y << "\n";
        // std::cout << "point x  " << point.x << "\n";        

        if ( (point.y > minh || point.y < maxh) || (point.x < minw || point.x > maxw) ) 
        {
            // Out of bounds
            return false;
        }
        else if ( (point.y < minh || point.y > maxh) || (point.x > minw || point.x < maxw) )
        {
            // Within bounds
            return true;
        }

        return false;
    }

    float getUvPercentage(const cv::Mat& mat)
    {
        cv::Mat hsv, thrsd;
        cv::cvtColor(mat, hsv, CV_BGR2HSV);
        cv::Mat channels[3];
        cv::split(hsv, channels);
        cv::Mat selChannel = channels[2];
        selChannel = selChannel > 50;
        int countBlack = cv::countNonZero(selChannel);
        return (countBlack * 100.00) / (mat.cols * mat.rows);
    }

    float getIrBrightness(cv::Mat irImage)
    {
        cv::Mat hsv;
        cv::cvtColor(irImage, hsv, CV_BGR2HSV);
        float irResult = cv::mean(hsv)[2];

        // cv::mean() will return 3 numbers, one for each channel:
        // 0=hue;     1=saturation;    2=value (brightness)

        return irResult;
    }
};