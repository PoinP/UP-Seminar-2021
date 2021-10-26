#include <iostream>

int main()
{
    int number, power;
    int result = 1;

    std::cout << "Please eneter a number and its power: ";
    std::cin >> number >> power;

    for (; power > 0; power--)
    {
        result *= number;
    }

    std::cout << result;
}