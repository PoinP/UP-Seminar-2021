#include <iostream>

int main()
{
    int sideA, sideB, sideC;

    std::cout << "Please enter the sides of a triangle: ";
    std::cin >> sideA >> sideB >> sideC;

    bool doesExist = (sideA + sideB > sideC) && (sideA + sideC > sideB) && (sideB + sideC > sideA);

    if (!doesExist)
    {
        std::cout << "does not exist" << std::endl;
    }
    else
    {
        std::cout << "exist, ";

        if (sideA == sideB && sideA == sideC && sideB == sideC)
        {
            std::cout << "equilateral";
        }
        else if (sideA == sideB || sideA == sideC || sideB == sideC)
        {
            std::cout << "isosceles";
        }
        else
        {
            std::cout << "scalene";
        }

        std::cout << std::endl;
    }

    return 0;
}