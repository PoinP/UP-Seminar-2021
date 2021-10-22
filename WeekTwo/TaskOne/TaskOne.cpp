#include <iostream>

int main()
{
    int number = 0;

    std::cout << "Please enter a three digit number: ";

    while (number < 100 || number > 999) 
    {
        std::cin >> number;
    }

    int firstDigit = number % 10;
    int secondDigit = number % 100 / 10;
    int thirdDigit = number / 100;
    int digitSum = firstDigit + secondDigit + thirdDigit;

    std::cout << digitSum << std::endl;
}