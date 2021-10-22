#include <iostream>

int main()
{
    int numerator, denominator;

    std::cout << "Numerator = ";
    std::cin >> numerator;
    std::cout << "Denominator = ";
    std::cin >> denominator;

    bool areDivisible = numerator % denominator == 0;
    const char* response = areDivisible ? "True" : "False";

    std::cout << response << std::endl;
}