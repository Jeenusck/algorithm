// See https://practice.geeksforgeeks.org/problems/sum-of-array-elements2502/1/?category[]=Arrays&page=1&query=category[]Arrayspage1

#include <numeric>

int sumElement(int arr[], int n)
{
    return std::accumulate(arr, arr + n, 0);
}