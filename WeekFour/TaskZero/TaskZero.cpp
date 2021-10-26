#include <iostream>

int main()
{
    int number;
    int factorial = 1;

    std::cout << "Please enter a number: ";
    std::cin >> number;

    for (int i = number; i > 0; i--)
    {
        factorial *= i;
    }

    std::cout << factorial;
}