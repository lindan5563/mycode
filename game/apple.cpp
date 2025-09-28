#include <opencv2/opencv.hpp>

int main()
{
    // 读取图片
    cv::Mat image = cv::imread("image.jpg");

    // 检查图片是否成功读取
    if (image.empty())
    {
        std::cout << "无法读取图片" << std::endl;
        return -1;
    }

    // 创建窗口并显示图片
    cv::namedWindow("Image", cv::WINDOW_NORMAL);
    cv::imshow("Image", image);

    // 等待用户按下任意键
    cv::waitKey(0);

    return 0;
}


