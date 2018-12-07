#include <opencv2/opencv.hpp>
#include <iostream>
#include <math.h>
using namespace cv;

int main(int argc, char** argv) {
	// 掩膜操作: 实现图像对比度调整

	Mat src, dst;
	// 读取图片
	src = imread("D:/OpenCVProject/day1206/first.jpg");
	// 判断图片是否存在
	if (!src.data) {
		printf("could not load image...\n");
		return -1;
	}
	// 定义窗口，用于展示图片
	namedWindow("original image", CV_WINDOW_AUTOSIZE);
	// 展示图片
	imshow("original image", src);

	/*
	// 拉普拉斯1型滤波器  高通边缘检测器掩膜 
	// 定义掩膜
	Mat kernel = (Mat_<char>(3, 3) << -1, 0, -1, 0, 4, 0, -1, 0, -1);
	// 掩膜处理
	filter2D(src, dst, src.depth(), kernel);
	namedWindow("filtered image", CV_WINDOW_AUTOSIZE);
	imshow("filtered image", dst);
	*/

	/*
	// 3x3高斯均值滤波器
	Mat kernel = (Mat_<char>(3, 3) << 1, 2, 1, 2, 4, 2, 1, 2, 1);
	filter2D(src, dst, src.depth(), kernel);
	namedWindow("filtered image", CV_WINDOW_AUTOSIZE);
	imshow("filtered image", dst);
	*/

	/*
	// 锐化   （中锐化：filters(4) = 5 ， 高锐化：filters(4) = 6）
	Mat kernel = (Mat_<char>(3, 3) << 0, -1, 0, -1, 6, -1, 0, -1, 0);
	filter2D(src, dst, src.depth(), kernel);
	namedWindow("filtered image", CV_WINDOW_AUTOSIZE);
	imshow("filtered image", dst);
	*/

	/*
	// 垂直掩膜 
	Mat kernel = (Mat_<char>(3, 3) << 3, -6, 3, 3, -6, 3, 3, -6, 3);
	filter2D(src, dst, src.depth(), kernel);
	namedWindow("filtered image", CV_WINDOW_AUTOSIZE);
	imshow("filtered image", dst);
	*/

	/*
	// 水平掩膜 
	Mat kernel = (Mat_<char>(3, 3) << 3, 3, 3, -6, -6, -6, 3, 3, 3);
	filter2D(src, dst, src.depth(), kernel);
	namedWindow("filtered image", CV_WINDOW_AUTOSIZE);
	imshow("filtered image", dst);
	*/
	
	// 对角线掩膜
	Mat kernel = (Mat_<char>(3, 3) << 3, 3, -6, 3, -6, 3, -6, 3, 3);
	filter2D(src, dst, src.depth(), kernel);
	namedWindow("filtered image", CV_WINDOW_AUTOSIZE);
	imshow("filtered image", dst);

	waitKey(0);
	return 0;
}