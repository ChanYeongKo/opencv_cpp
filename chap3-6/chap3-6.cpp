#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
//1번
/*
int main() {
	Mat img = imread("myphoto.bmp");
	cout << "행의 수:" << img.rows << endl;
	cout << "열의 수:" << img.cols << endl;
	cout << "채널수:" << img.channels() << endl;
	if (img.type() == CV_8UC1) cout << "type: " << "CV_8UC1" << endl;
	else if (img.type() == CV_8UC3) cout << "type: " << "CV_8UC3" << endl;
	return 0;
}
*/

//2번
/*
int main() {
	float a[] = { 1, 3, -4, 2 };
	float b[] = { 2, 3, 0, 5 };
	float c[] = { -2, -2, -2, -3 };
	Mat A(2, 2, CV_32FC1, a);
	Mat B(2, 2, CV_32FC1, b);
	Mat C(2, 2, CV_32FC1, c);
	Mat X = (3 * A) + B.inv() + (10 * C) - 5;
	cout << "x:" << endl << X;
	return 0;
}
*/
//3번

/*
int main() {
	Mat img = imread("lenna.bmp");
	int color;
	cout << "밝기 변화량을 입력";
	cin >> color;
	Mat img2 = img + Scalar(color, color, color);
	imshow("img", img2);
	waitKey();
}
*/