#include <iostream>

void printArray(const int* arr, int arrSize);
void enterArray(int* arr, int arrSize);
void reverseArray(int* arr, int arrSize);
void swap(int& x, int& y);

int main()
{
	const int ARRAY_SIZE = 100;
	int numbers[ARRAY_SIZE];
	int size;

	std::cout << "Enter array size: ";
	std::cin >> size;

	enterArray(numbers, size);
	reverseArray(numbers, size);
	printArray(numbers, size);
}

void printArray(const int* arr, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << " ";
	}
}

void enterArray(int* arr, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		std::cin >> arr[i];
	}
}

void reverseArray(int *arr, int arrSize)
{
	for (int i = 0; i < arrSize / 2; i++)
	{
		swap(arr[i], arr[arrSize - i - 1]);
	}
}

void swap(int& x, int& y)
{
	x ^= y;
	y ^= x;
	x ^= y;
}