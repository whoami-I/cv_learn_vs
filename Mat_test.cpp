#include<iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

void Mat_test_main() {
	Mat m1(200,200,CV_8UC3,Scalar(255,0,0));
	Mat m2(100 , 300, CV_64FC3);
	int size[] = {5,10,10};
	Mat m3(3, size, CV_8UC3);
	for (int i = 0; i < m1.rows; ++i) {
		for (int j = 0; j < m1.cols; ++j) {
			uchar* pixel = m1.data + m1.step[0] * i + m1.step[1] * j;
			*pixel = 255;
			*(pixel + 1) = 255;
			*(pixel + 2) = 0;
		}
	}
	cout << m2.elemSize() << endl;
	//namedWindow("image", WINDOW_KEEPRATIO);
	//imshow("image", m1);
	waitKey(0);
	//cout << m1.elemSize() << endl;
	//cout << m1.depth() << endl;
}




