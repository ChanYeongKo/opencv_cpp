#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
//1번
/*
int main() {
	Mat img = imread("lenna.bmp", IMREAD_COLOR);
	Vec3b pixel = img.at<Vec3b>(50, 50);
	cout << "좌표(50,50)의 화소값(B,G,R) : (" << (int)pixel[0] << ", " << (int)pixel[1] << ", " << (int)pixel[2] << ")" << endl;
	Vec3b pixel2 = img.at<Vec3b>(100, 100);
	cout << "좌표(100,100)의 화소값(B,G,R) : (" << (int)pixel2[0] << ", " << (int)pixel2[1] << ", " << (int)pixel2[2] << ")" << endl;
	Vec3b pixel3 = img.at<Vec3b>(150, 150);
	cout << "좌표(150,150)의 화소값(B,G,R) : (" << (int)pixel3[0] << ", " << (int)pixel3[1] << ", " << (int)pixel3[2] << ")" << endl;
}
*/

//2번
/*
int main() {
	Mat img = imread("lenna.bmp", IMREAD_GRAYSCALE);
	for (int i = 0; i < img.cols; i++)
	{
		img.at<uchar>(i, img.rows / 4) = 255;
		img.at<uchar>(i, img.rows / 2) = 255;
		img.at<uchar>(i, (img.rows * 3) / 4) = 255;
	}
	for (int j = 0; j < img.rows; j++)
	{
		img.at<uchar>(img.cols / 4, j) = 255;
		img.at<uchar>(img.cols / 2, j) = 255;
		img.at<uchar>((img.cols * 3) / 4, j) = 255;
	}
	imshow("img", img);
	waitKey();
}
*/

//3번
/*
int main() {
	Mat img = imread("lenna.bmp");
	for (int i = 0; i < img.cols; i++)
	{
		for (int k = 0; k < 3; k++) {
			img.at<Vec3b>(i, img.rows / 4)[k] = 255;
			img.at<Vec3b>(i, img.rows / 2)[k] = 255;
			img.at<Vec3b>(i, (img.rows * 3) / 4)[k] = 255;
		}
		
	}
	for (int j = 0; j < img.rows; j++)
	{
		for (int k = 0; k < 3; k++) {
			img.at<Vec3b>(img.cols / 4, j)[k] = 255;
			img.at<Vec3b>(img.cols / 2, j)[k] = 255;
			img.at<Vec3b>((img.cols * 3) / 4, j)[k] = 255;
		}
	}
	imshow("img", img);
	waitKey();
}
*/

//4번
/*
int main() {
	Mat img(400, 400, CV_8UC1, Scalar(255));
	for (int x = 0; x < img.cols; x++)
	{
		float y = (1.0 / 400.0) * (x * x);
		img.at<uchar>(y, x) = 0;
	}
	imshow("img", img);
	waitKey();
}
*/