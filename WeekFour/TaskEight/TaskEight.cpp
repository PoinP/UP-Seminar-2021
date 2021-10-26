#include <iostream>

int main()
{
    std::cout << "This program will print the consonant letters!" << std::endl;

    for (int i = 'B'; i <= 'Z'; i++)
    {
        bool isConsonant = !(i == 'E' || i == 'I' || i == 'O' || i == 'U');
        
        if (isConsonant) std::cout << (char)i << ", ";
    }
}