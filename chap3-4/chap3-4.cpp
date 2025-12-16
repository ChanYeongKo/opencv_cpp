#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
//과제 2
/*
int main() {
	float data[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	Mat img1(3, 5, CV_32FC1,data);
	Mat img2 = img1(Rect(2, 1, 3, 2)).clone();
	cout << "img1 = " << endl << img1 << endl;
	cout << "img2 = " << endl << img2 << endl;
}
*/

//과제 3
/*
int main() {
	Mat img = imread("dog.jpg", IMREAD_COLOR);
	Mat img2;
	img2 = img(Rect(66, 27, 50, 50));
	img2.setTo(Scalar(255,0,0));
	imshow("img", img);
	waitKey();
}
*/

//과제 4
/*
int main() {
	Mat img = imread("dog.jpg", IMREAD_COLOR);
	Mat img2,img3 = img.clone();
	img2 = img(Rect(66, 27, 50, 50));
	img2.setTo(Scalar(255, 0, 0));
	Mat size[] = { img,img3 };
	int i = 0;
	while (true) {
		imshow("img", size[i]);
		i++;
		if (i == 2)i = 0;
		int key = waitKey(1000);
		if (key == 'q' || key == 'Q') break;
	}
	
}
*/

//과제 5
/*
int main() {
	Mat img(200, 600, CV_8UC3, Scalar(255,255,255));
	Mat img2 = img.clone();
	Rect size[] = { Rect(0,0,200,200),Rect(200,0,200,200),Rect(400,0,200,200)};
	int i = 0;
	while (true) {
		img = img2.clone();
		img(size[i]).setTo(Scalar(0, 0, 255));
		imshow("img", img);
		i++;
		if (i == 3)i = 0;
		int key = waitKey(1000);
		if (key == 'q' || key == 'Q') break;
	}
}
*/

//과제 6
/*
int main() {
	Mat img = imread("lenna.bmp", IMREAD_COLOR);
	int x, y, w, h, s;
	cout << "관심 영역의 좌측상단좌표(x,y): ";
	cin >> x >> y;
	cout << "관심영역의 폭, 높이(width,height): ";
	cin >> w >> h;
	cout << "픽셀변화량: ";
	cin >> s;
	img(Rect(x, y, w, h)) += s;
	imshow("img", img);
	waitKey();
}
*/
