// Given an array Arr of N elements which is first increasing and then may be decreasing, find the maximum element in the array.
// Note: If the array is increasing then just print then last element will be the maximum value.
// Constraints:
// 3 <= N <= pow(10, 6)
// 1 <= Arr[i] <= pow(10, 6)

#include <iostream>
#include <vector>
#include <algorithm>

int findMaximum(int arr[], int n)
{
	if (arr[n - 1] > arr[n - 2])
	{
		return arr[n - 1];
	}

	if (arr[n / 2 - 1] < arr[n / 2])
	{
		return findMaximum(&arr[n / 2], n / 2);
	}

	return findMaximum(arr, n / 2);
}


int main()
{
	int test1[]{ 1,15,25,45,42,21,17,12,11 };
	int test2[]{ 1,2,3,4 };
	std::vector<int> test3;

	std::generate_n(std::back_insert_iterator<std::vector<int>>(test3), 12, [n = 0]() mutable { return ++n; });
	test3.push_back(1);


	if (findMaximum(test1, 9) != 45)
	{
		std::cout << "Error";
		return -1;
	}

	if (findMaximum(test2, 4) != 4)
	{
		std::cout << "Error";
		return -1;
	}

	int result = (test3.size() * (test3.size() + 1)) / 2;
	if (findMaximum(test3.data(), test3.size()) != 12)
	{
		std::cout << "Error";
		return -1;
	}

	std::cout << "Test passed\n";

	return 0;
}