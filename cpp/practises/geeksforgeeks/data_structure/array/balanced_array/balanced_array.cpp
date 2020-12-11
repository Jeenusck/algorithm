// Given an array of even size N, task is to find minimum value 
// that can be added to an element so that array become balanced. 
// An array is balanced if the sum of the left half of the array 
// elements is equal to the sum of right half.
#include <algorithm>
#include <numeric>
#include <iostream>

class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
        return std::abs(std::accumulate(a, a + n / 2, 0) - std::accumulate(a + n/ 2, a + n, 0));
    }

};

int main()
{
    Solution s;

    int arr[] = { 1, 5, 3, 2 };
    int arr1[] = { 1, 2, 1, 2, 1, 3 };
    if (s.minValueToBalance(arr, 4) != 1)
    {
        std::cout << "Test failed";
        return -1;
    }
    if(s.minValueToBalance(arr1, 6) != 2)
    {
        std::cout << "Test failed";
        return -1;
    }
    std::cout << "Test Passed";
    return -1;
}