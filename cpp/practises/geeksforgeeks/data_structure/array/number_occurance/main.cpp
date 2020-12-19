
// Given a sorted array Arr of size Nand a number X, you need to 
// find the number of occurrences of X in Arr.
#include <iostream>
#include <algorithm>

// } Driver Code Ends


//User function template for C++
class Solution 
{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x) {
        // code here
        auto p = std::equal_range(arr, arr + n, x);
        if (p.first == arr + n)
        {
            return 0;
        }

        return std::distance(p.first, p.second);
    }
};


// { Driver Code Starts.

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n >> x;
        auto arr = std::make_unique<int[]>(n);
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr.get(), n, x);
        std::cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends