#include <iostream>

int main()
{
    int lowerCaseCount, upperCaseCount,
        digitCount, symbolCount;

    lowerCaseCount = upperCaseCount = digitCount = symbolCount = 0;

    std::cout << "Please enter 10 characters: ";

    for (int i = 0; i < 10; i++)
    {
        char character;
        std::cin >> character;

        if ((character >= '0') && (character <= '9')) digitCount++;
        else if ((character >= 'A') && (character <= 'Z')) upperCaseCount++;
        else if ((character >= 'a') && (character <= 'z')) lowerCaseCount++;
        else symbolCount++;
    }

    std::cout << "Lowercase letters: " << lowerCaseCount << std::endl
              << "Uppercase letters: " << upperCaseCount << std::endl
              << "Digits: " << digitCount << std::endl
              << "Symbols: " << symbolCount << std::endl;
}