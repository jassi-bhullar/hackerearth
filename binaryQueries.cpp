#include <iostream>

void printArrayInReverseOrder(int arraySize, int arr[]){
	for(int i = arraySize - 1; i >= 0; i--){
		std::cout << arr[i] << std::endl;
	}
}

int main(int argc, char const *argv[])
{
	int arraySize;
	std::cin >> arraySize;

	int arr[arraySize];
	for (int i = 0; i < arraySize; ++i)
	{
		std::cin >> arr[i];
	}

	printArrayInReverseOrder(arraySize, arr);

	return 0;
}