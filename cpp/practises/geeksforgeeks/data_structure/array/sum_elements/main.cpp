
#include <iostream>
#include <vector>
#include <algorithm>
extern int sumElement(int arr[], int n);

int main()
{
	int test1[]{ 3,2,1 };
	int test2[]{ 1,2,3,4 };
	std::vector<int> test3;

	std::generate_n(std::back_insert_iterator<std::vector<int>>(test3), 10, [n = 0]() mutable { return ++n; });


	if (sumElement(test1, 3) != 6)
	{
		std::cout << "Error";
		return -1;
	}

	if (sumElement(test2, 3) != 6)
	{
		std::cout << "Error";
		return -1;
	}

	int result = (test3.size() * (test3.size() + 1)) / 2;
	if (sumElement(test3.data(), test3.size()) != result)
	{
		std::cout << "Error";
		return -1;
	}

	std::cout << "Test passed\n";

	return 0;
}