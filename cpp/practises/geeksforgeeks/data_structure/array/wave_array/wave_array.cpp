// Given a sorted array arr[] of distinct integers. Sort the array into a wave-like 
// array and return it. In other words, arrange the elements into a sequence such 
// that a1 >= a2 <= a3 >= a4 <= a5..... (considering the increasing lexicographical order).

#include <algorithm>

void convertToWave(int* arr, int n) 
{
	for (int i = 0; i < n-1; i += 2)
	{
		std::swap(arr[i], arr[i + 1]);
	}
}