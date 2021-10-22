#include <iostream>

int main()
{
    std::cout << "Stamat is going to travel around europe!" << std::endl;
    std::cout << "You need to help him by setting up his route in kilometers!" << std::endl;
    std::cout << "For this to work he must make at least two transfers." << std::endl;
    std::cout << "Prices are as follows:" << std::endl;

    std::cout << std::endl;

    std::cout << "Between 0km and 100km - 10BGN / km;" << std::endl;
    std::cout << "Between 101km and 500km - 8BGN / km;" << std::endl;
    std::cout << "Between 501km and 1000km - 6BGN / km;" << std::endl;
    std::cout << "Over 1000km - 5BGN / km;" << std::endl;

    std::cout << std::endl;

    std::cout << "Please enter his route: ";

    int totalKilometers = 0;
    int totalPrice = 0;
    int routes = 0;
    int route;

    while (std::cin >> route)
    {
        if (route >= 0)
        {
            routes++;
            totalKilometers += route;

            if (route > 1000) totalPrice = totalPrice + (route * 5);
            else if (route > 500) totalPrice = totalPrice + (route * 6);
            else if (route > 100) totalPrice = totalPrice + (route * 8);
            else if (route >= 0) totalPrice = totalPrice + (route * 10);
            else std::cout << "Invalid kilometers!" << std::endl;

            if (routes >= 2 && std::cin.get() == '\n') break;
        }
        else
        {
            std::cout << "Invalid kilometers! You don't want Stamat to go back, do you?" << std::endl;
            std::cout << "Try again: ";
        }
    }

    std::cout << "Stamat is going to pay " << totalPrice 
              << "BGN for travelling a total of " << totalKilometers 
              << " kilometers!" << std::endl;
}