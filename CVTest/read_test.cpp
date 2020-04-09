#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;
void read_test_main() {
    namedWindow("image", WINDOW_KEEPRATIO);
    Mat imgMatrix = imread("img.jpg");
    for (int i = 0; i < imgMatrix.rows; ++i) {
        for (int j = 0; j < imgMatrix.cols; ++j) {
            uchar* ppixel = imgMatrix.data + i * imgMatrix.step[0] + j * imgMatrix.step[1];
            //(*ppixel+2) = 255;
            //(*(ppixel + 1)) += 100;
            (*(ppixel+2)) = 255;
        }
    }
    imshow("image", imgMatrix);
    waitKey(0);
}