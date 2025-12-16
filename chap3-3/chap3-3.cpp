#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
//과제 1
/*
int main() {
	float data[] = { 3.5,2.1,-1.5,-6.5 };
	Mat mat1(2, 2,CV_32FC1,data);
	cout << "mat1 = " << endl << mat1 << endl;
	float data2[] = {0,2,-1,5,10,8,6,-7,9};
	Mat mat2(3, 3, CV_32FC1,data2);
	cout << "mat2 = " << endl << mat2 << endl;
	float data3[] = { 1, 2, 3, 4 };
	Mat mat3(1, 4, CV_32FC1, data3);
	cout << "mat3 = " << endl << mat3 << endl;
	float data4[] = { 5, 6, 7, 8 };
	Mat mat4(4, 1, CV_32FC1, data4);
	cout << "mat4 = " << endl << mat4 << endl;
	return 0;

}
*/

//과제 2
/*
int main() {
	Mat mat1(Size(400, 300), CV_8UC3, Scalar(255, 0, 0));
	Mat mat2(Size(400, 300), CV_8UC3, Scalar(0, 255, 0));
	Mat mat3(Size(400, 300), CV_8UC3, Scalar(0, 0, 255));
	imshow("img1", mat1);
	imshow("img2", mat2);
	imshow("img3", mat3);
	waitKey();
}
*/

//과제 3
/*
int main() {
	Mat img(Size(400, 300), CV_8UC3);
	int b, g, r;
	cout << "B값을 입력하라: ";
	cin >> b;
	cout << "G값을 입력하라: ";
	cin >> g;
	cout << "R값을 입력하라: ";
	cin >> r;
	img.setTo(Scalar(b, g, r));
	imshow("img", img);
	waitKey();
}
*/

//과제 4
/*
int main() {
	Mat blue(Size(400, 300), CV_8UC3, Scalar(255, 0, 0));
	Mat green(Size(400, 300), CV_8UC3, Scalar(0, 255, 0));
	Mat red(Size(400, 300), CV_8UC3, Scalar(0, 0, 255));
	Mat size[] = { blue,green,red };
	int i = 0;
	while (true) {
		imshow("img", size[i]);
		i++;
		if (i == 3)i = 0;
		int key = waitKey(1000);
		if (key == 'Q' || key == 'q') { break; }
	}
}
*/


//과제 5
int main() {
	Mat img(400, 400, CV_8UC1,Scalar(0));
	int i = 0,num = 1;
	while (true) {
		i += num;
		img.setTo(Scalar(i));
		imshow("img", img);
		int key = waitKey(5);
		if (i >= 255) { i = 255; num = -1; }
		if (i <= 0) { i = 0; num = 1; }
		if (key == 'q' || key == 'Q') break;
	}
	return 0;
}