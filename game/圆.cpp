#include <iostream>
#include <cmath>

int main() {
    int radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    int diameter = 2 * radius;
    int centerX = radius;
    int centerY = radius;

    for (int y = 0; y <= diameter; ++y)
	{
        for (int x = 0; x <= diameter; ++x)
		{
            int distance = std::sqrt((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY));
            if (std::abs(distance - radius) < 0.5)
                std::cout << "*";
			else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
