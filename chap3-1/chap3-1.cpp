#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
//과제 1
/*
int main() {
	int x1, y1, x2, y2;
	cout << "첫번째 점의 x,y좌표를 입력: ";
	cin >> x1 >> y1;
	cout << "두번째 점의 x,y좌표를 입력: ";
	cin >> x2 >> y2;
	Point pt1(x1,y1);
	Point pt2(x2,y2);
	cout << "pt1: "<< pt1 << endl << "pt2: " << pt2 << endl;
	cout <<"두점사이의 거리: " << norm(pt1 - pt2) << endl;
	return 0;
}
*/

//과제 2
/*
int main() {
	int x1, y1, x2, y2;
	cout << "첫번째 사각형의 폭, 높이 입력: ";
	cin >> x1 >> y1;
	cout << "두번째 사각형의 폭, 높이 입력: ";
	cin >> x2 >> y2;
	Size s1(x1, y1);
	Size s2(x2, y2);
	cout << "s1: " << s1 << endl << "s2: " << s2 << endl;
	cout << "s1의 면적 " << s1.width * s1.height << endl << "s2의 면적" << s2.width * s2.height << endl;
}
*/

//과제 3
/*
int main() {
	Rect r1(10, 10, 20, 20);
	Point p1(15, 15);
	if (r1.contains(p1)) {
		cout << "사각형 r1안에 점 p1이 존재" << endl;
	}
	else {
		cout << "사각형 외부에 존재" << endl;
	}
}
*/

//과제 4
/*
int main() {
	int x, y, width, height, px, py;
	cout << "사각형의 좌측상단의 좌표를 입력하시오(x,y): ";
	cin >> x >> y;
	cout << "사각형의 폭, 높이를 입력하시오(width, height): ";
	cin >> width >> height;
	cout << "점 P의 좌표를 입력하시오: ";
	cin >> px >> py;
	Rect rect(x, y, width, height);
	Point pt(px, py);
	if (pt.inside(rect)) {
		cout << "점 P는 사각형 안에 있다." << endl;
	}
	else {
		cout << "점 P는 사각형 밖에 있다." << endl;
	}
}
*/

//과제 5
int main() {
	String str;
	for (int i = 1; i <= 15; i+=2)
	{
		str = cv::format("실행결과%d.bmp", i);
		cout << str << endl;
	}
	return 0;
}