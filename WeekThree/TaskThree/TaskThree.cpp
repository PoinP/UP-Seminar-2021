#include <iostream>

int main()
{
    int max = INT_MIN;

    std::cout << "Please enter 10 numbers: ";

    for (int i = 0; i < 10; i++)
    {
        int number;
        std::cin >> number;

        if (number > max) max = number;
    }

    std::cout << "Biggest number is: " << max << std::endl;
}