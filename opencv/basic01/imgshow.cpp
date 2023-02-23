#include <iostream>
#include <opencv2/highgui.hpp>

int main()
{
    //cv::Mat image(300,400, CV_8UC1,cv::Scalar(200));
    cv::Mat image = cv::imread("abc.png", cv::IMREAD_COLOR);
    cv::imshow("img",image);
    cv::waitKey(0);

    return 0;
}