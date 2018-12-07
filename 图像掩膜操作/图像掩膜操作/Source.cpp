#include <opencv2/opencv.hpp>
#include <iostream>
#include <math.h>
using namespace cv;

int main(int argc, char** argv) {
	// ��Ĥ����: ʵ��ͼ��Աȶȵ���

	Mat src, dst;
	// ��ȡͼƬ
	src = imread("D:/OpenCVProject/day1206/first.jpg");
	// �ж�ͼƬ�Ƿ����
	if (!src.data) {
		printf("could not load image...\n");
		return -1;
	}
	// ���崰�ڣ�����չʾͼƬ
	namedWindow("original image", CV_WINDOW_AUTOSIZE);
	// չʾͼƬ
	imshow("original image", src);

	/*
	// ������˹1���˲���  ��ͨ��Ե�������Ĥ 
	// ������Ĥ
	Mat kernel = (Mat_<char>(3, 3) << -1, 0, -1, 0, 4, 0, -1, 0, -1);
	// ��Ĥ����
	filter2D(src, dst, src.depth(), kernel);
	namedWindow("filtered image", CV_WINDOW_AUTOSIZE);
	imshow("filtered image", dst);
	*/

	/*
	// 3x3��˹��ֵ�˲���
	Mat kernel = (Mat_<char>(3, 3) << 1, 2, 1, 2, 4, 2, 1, 2, 1);
	filter2D(src, dst, src.depth(), kernel);
	namedWindow("filtered image", CV_WINDOW_AUTOSIZE);
	imshow("filtered image", dst);
	*/

	/*
	// ��   �����񻯣�filters(4) = 5 �� ���񻯣�filters(4) = 6��
	Mat kernel = (Mat_<char>(3, 3) << 0, -1, 0, -1, 6, -1, 0, -1, 0);
	filter2D(src, dst, src.depth(), kernel);
	namedWindow("filtered image", CV_WINDOW_AUTOSIZE);
	imshow("filtered image", dst);
	*/

	/*
	// ��ֱ��Ĥ 
	Mat kernel = (Mat_<char>(3, 3) << 3, -6, 3, 3, -6, 3, 3, -6, 3);
	filter2D(src, dst, src.depth(), kernel);
	namedWindow("filtered image", CV_WINDOW_AUTOSIZE);
	imshow("filtered image", dst);
	*/

	/*
	// ˮƽ��Ĥ 
	Mat kernel = (Mat_<char>(3, 3) << 3, 3, 3, -6, -6, -6, 3, 3, 3);
	filter2D(src, dst, src.depth(), kernel);
	namedWindow("filtered image", CV_WINDOW_AUTOSIZE);
	imshow("filtered image", dst);
	*/
	
	// �Խ�����Ĥ
	Mat kernel = (Mat_<char>(3, 3) << 3, 3, -6, 3, -6, 3, -6, 3, 3);
	filter2D(src, dst, src.depth(), kernel);
	namedWindow("filtered image", CV_WINDOW_AUTOSIZE);
	imshow("filtered image", dst);

	waitKey(0);
	return 0;
}