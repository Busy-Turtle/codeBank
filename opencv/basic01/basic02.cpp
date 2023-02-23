#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main()
{
    cv::Point_<int> pt1(100,200);
    cv::Point_<float> pt2(92.3f, 125.23f);
    cv::Point_<double> pt3(100.2, 300.9);

    std::cout << pt1 << std::endl;
    std::cout << pt2 << std::endl;
    std::cout << pt3 << std::endl;

    cv::Point2i pt4(120,69);
    cv::Point2f pt5(93.3f, 126.23f), pt6(0.f, 0.4f);
    cv::Point2d pt7(101.2, 310.1);

    std::cout << pt4 << std::endl;
    std::cout << pt5 << std::endl;
    std::cout << pt7 << std::endl;
    
    cv::Point pt8 = pt1 + (cv::Point)pt2;
    cv::Point2f pt9 = pt6 * 3.14f;    

    std::cout << pt8.x << "." << pt8.y << endl;
    std::cout << pt9 << endl;
    std::cout << pt7.dot(pt8) << endl;
    return 0;
}