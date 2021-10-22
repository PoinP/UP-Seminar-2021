#include <iostream>

int main()
{
    unsigned int sideA, sideB, sideC;
    bool doesTriangleExist = false;

    std::cout << "Please enter a triangle's sides: ";
    std::cin >> sideA >> sideB >> sideC;

    if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA) doesTriangleExist = true;

    std::cout << std::boolalpha << doesTriangleExist << std::endl;
}
