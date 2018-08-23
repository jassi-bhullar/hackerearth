#include <iostream>

int main(int argc, char const *argv[])
{
	int queryType, left, right, x;
	int numElements, numQueries;

	std::cin >> numElements >> numQueries;

	int arr[numElements];
	for (int i = 0; i < numElements; ++i)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < numQueries; ++i)
	{
		std::cin >> queryType;
		if(queryType == 0){
			std::cin >> left >> right;
			std::cout << (arr[right-1] ? "ODD" : "EVEN") << std::endl;
		}
		else {
			std::cin >> x;
			arr[x-1] = arr[x-1] ? 0 : 1;
		} 
	}
	
	return 0;
}