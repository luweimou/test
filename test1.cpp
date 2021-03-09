#include <fstream>
#include <vector>
#include <sstream>
#include <cstddef>
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main ()
{
    Mat image(500, 500, CV_8UC3);
    Point p1(20, 20), p2(400, 400);
    Scalar color(255, 0, 0); 
    line(image, p1, p2, color, 1, 8, 0);

    imshow("image", image);
    waitKey(0);

    return 0;
}