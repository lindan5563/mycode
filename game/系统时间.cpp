#include <iostream>
#include <ctime>

int main() {
    time_t currentTime = time(nullptr);
    std::cout << "Current time: " << currentTime << std::endl;
    return 0;
}
