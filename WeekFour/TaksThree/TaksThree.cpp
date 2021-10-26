#include <iostream>

int main()
{
    int n;
    int termOne = 0, termTwo = 1, nextTerm;

    std::cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (i == 1) 
        {
            std::cout << termOne << ", ";
            continue;
        }

        if (i == 2) 
        {
            std::cout << termTwo << ", ";
            continue;
        }

        nextTerm = termOne + termTwo;
        termOne = termTwo;
        termTwo = nextTerm;

        std::cout << nextTerm;

        if (!(i + 1 > n))
        {
            std::cout << ", ";
        }
    }

    std::cout << std::endl;
}