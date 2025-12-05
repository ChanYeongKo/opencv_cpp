#include "opencv2/opencv.hpp"
#include "iostream"

using namespace std;
using namespace cv;

int main() {
	Mat img = imread("lenna.bmp");
	imshow("img)", img);
	waitKey();
	return 0;
}