#include <iostream>

int main()
{
    int numberCount;
    int max = INT_MIN;
    bool hasNegative = false;

    std::cout << "How many numbers do you want to enter: ";
    std::cin >> numberCount;

    while (numberCount)
    {
        int number;

        std::cin >> number;

        if ((max < number) && (number < 0))
        {
            hasNegative = true;
            max = number;
        }

        numberCount--;
    }

    if (!hasNegative)
    {
        std::cout << "There were no negative numbers!" << std::endl;
    }
    else 
    {
        std::cout << max;
    }
}