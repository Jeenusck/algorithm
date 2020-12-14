
#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>

int minNum(long long int arr[], int n)
{
	// Your code goes here
	int sum = std::accumulate(arr, arr + n, 0);
	return sum % 2 ? 1 : 2;
}

int main()
{
	long long int test1[] {1, 2, 3, 4, 5, 6, 7, 8} ;
	long long int test2[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	if (minNum(test1, 8) != 2)
	{
		std::cout << "Error";
		return -1;
	}

	if (minNum(test2, 9) != 1)
	{
		std::cout << "Error";
		return -1;
	}

	std::cout << "Test passed\n";

	return 0;
}