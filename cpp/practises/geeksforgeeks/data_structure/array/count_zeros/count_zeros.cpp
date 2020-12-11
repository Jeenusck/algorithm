// Given an array of size N consisting of only 0's and 1's. 
// The array is sorted in such a manner that all the 1's are 
// placed first and then they are followed by all the 0's. 
// Find the count of all the 0's.
#include <algorithm>
#include <iostream>

class Solution {
public:
    int countZeroes(int arr[], int n) {
        auto range{ std::equal_range(arr, arr + n, 0, std::greater<int>()) };

        return range.second - range.first;
    }
};

int main()
{
	Solution st;

	int test1[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 };
	int test2[] = { 0, 0, 0, 0, 0 };

	if (st.countZeroes(test1, 12) != 3)
	{
		std::cout << "Test failed\n";
		return -1;
	}
	if(st.countZeroes(test2, 5) != 5)
	{
		std::cout << "Test failed\n";
		return -1;
	}

	std::cout << "Test passed\n";
	return 0;
}