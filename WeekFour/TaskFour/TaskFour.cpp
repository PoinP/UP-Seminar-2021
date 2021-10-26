#include <iostream>

int main()
{
    int number;
    int sum = 0;

    do 
    {
        std::cin >> number;
        sum += number;
    } while (number);

    std::cout << sum;
}