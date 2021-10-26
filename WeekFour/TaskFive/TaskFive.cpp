#include <iostream>

int main()
{
    int number;
	int digitSum = 0;

	std::cout << "Please eneter a number and I'll sum its digits: ";
    std::cin >> number;

	while (number)
	{
		digitSum += number % 10;
		number /= 10;
	}

	std::cout << digitSum;
}