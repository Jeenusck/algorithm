#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	 int t,n;
	 int d;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        cin>>d;
        auto b = make_unique<int[]>(n); //declare array of size n
        int* a = b.get();
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        
        //cout << n << "  " << d << endl;

        rotate(a, a+d, a+n);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
	return 0;
}