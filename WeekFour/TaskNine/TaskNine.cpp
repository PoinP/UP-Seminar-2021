#include <iostream>

int main()
{
    int number;

    std::cout << "Please enter dimensions for the square: ";
    std::cin >> number;

    for (int i = 0; i <= number; i++)
    {
        for (int j = 0; j <= number; j++)
        {
            if (i == j) std::cout << "0";
            else if (i < j) std::cout << "+";
            else if (i > j) std::cout << "-";
        }

        std::cout << std::endl;
    }
}
