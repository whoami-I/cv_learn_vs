#include<iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

void Mat_test_main() {
	Mat m1{2,2,CV_8UC(3),Scalar(0,0,255) };
	cout << m1.depth() << endl;
}
