#include <opencv2/opencv.hpp>

int main()
{
    // ��ȡͼƬ
    cv::Mat image = cv::imread("image.jpg");

    // ���ͼƬ�Ƿ�ɹ���ȡ
    if (image.empty())
    {
        std::cout << "�޷���ȡͼƬ" << std::endl;
        return -1;
    }

    // �������ڲ���ʾͼƬ
    cv::namedWindow("Image", cv::WINDOW_NORMAL);
    cv::imshow("Image", image);

    // �ȴ��û����������
    cv::waitKey(0);

    return 0;
}


