#include <iostream>

void printArray(const int* arr, int arrSize);
void sortArray(int* arr, int arrSize);
void enterArray(int* arr, int arrSize);
int combineArrays(const int* firstArr, int firstArrSize, const int* secondArr, int secondArrSize, int* outArr);

int main()
{
	const int MAX_SIZE = 100;

	int arrOne[MAX_SIZE];
	int arrOneSize;

	int arrTwo[MAX_SIZE];
	int arrTwoSize;

	std::cout << "Please enter array one size: ";
	std::cin >> arrOneSize;
	enterArray(arrOne, arrOneSize);

	std::cout << "Please enter array two size: ";
	std::cin >> arrTwoSize;
	enterArray(arrTwo, arrTwoSize);

	int outArr[MAX_SIZE];

	sortArray(arrOne, arrOneSize);
	sortArray(arrTwo, arrTwoSize);

	int outArrSize = combineArrays(arrOne, arrOneSize, arrTwo, arrTwoSize, outArr);

	printArray(outArr, outArrSize);
}

void enterArray(int* arr, int arrSize)
{
	std::cout << "Enter array: " << std::endl;
	for (int i = 0; i < arrSize; i++)
	{
		std::cin >> arr[i];
	}
}

void printArray(const int* arr, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << " ";
	}
}

void sortArray(int* arr, int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		for (int j = i; j < arrSize; j++)
		{
			if (arr[i] > arr[j])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}

int combineArrays(const int* firstArr, int firstArrSize, const int* secondArr, int secondArrSize, int* outArr)
{
	int& longest = firstArrSize >= secondArrSize ? firstArrSize : secondArrSize;
	int& shortest = firstArrSize <= secondArrSize ? firstArrSize : secondArrSize;
	const int* shorterArray = shortest == firstArrSize ? firstArr : secondArr;
	const int* longerArray = shorterArray == firstArr ? secondArr : firstArr;

	int arrIterator = 0;
	int j = 0;
	for (int i = 0; i < longest; i++)
	{
		for (; j < shortest; j++)
		{
			if (longerArray[i] <= shorterArray[j]) 
				break;
			outArr[arrIterator] = shorterArray[j];
			arrIterator++;
		}
		outArr[arrIterator] = longerArray[i];
		arrIterator++;
	}

	return arrIterator;
}