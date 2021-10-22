#include <iostream>

int main()
{
    int day, month;

    std::cout << "Please enter a day of the week and a month: ";
    std::cin >> day >> month;

	switch (day)
	{
	case 1:
		std::cout << "Monday" << std::endl;
		break;
	case 2:
		std::cout << "Tuesday" << std::endl;
		break;
	case 3:
		std::cout << "Wednesday" << std::endl;
		break;
	case 4:
		std::cout << "Thursday" << std::endl;
		break;
	case 5:
		std::cout << "Friday" << std::endl;
		break;
	case 6:
		std::cout << "Saturday" << std::endl;
		break;
	case 7:
		std::cout << "Sunday" << std::endl;
		break;
	default:
		std::cout << "No such day of the week exists!" << std::endl;
		break;
	}

	switch (month)
	{
	case 1:
		std::cout << "January" << std::endl;
		break;
	case 2:
		std::cout << "February" << std::endl;
		break;
	case 3:
		std::cout << "March" << std::endl;
		break;
	case 4:
		std::cout << "April" << std::endl;
		break;
	case 5:
		std::cout << "May" << std::endl;
		break;
	case 6:
		std::cout << "June" << std::endl;
		break;
	case 7:
		std::cout << "July" << std::endl;
		break;
	case 8:
		std::cout << "August" << std::endl;
		break;
	case 9:
		std::cout << "September" << std::endl;
		break;
	case 10:
		std::cout << "October" << std::endl;
		break;
	case 11:
		std::cout << "November" << std::endl;
		break;
	case 12:
		std::cout << "December" << std::endl;
		break;
	default:
		std::cout << "No such month exists!" << std::endl;
		break;
	}

	return 0;
}