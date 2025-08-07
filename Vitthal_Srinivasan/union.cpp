//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int count = 0;
        int i = 0, j = 0, k =0;
        int arr[n+m];
        sort(a, a+n);
        sort(b, b+m);
        while(i<n && j<m){
            if(a[i]<b[j]){
                arr[k] = a[i++];
                cout << arr[k] <<" ";
                k++;
            }
            else if(a[i] == b[j]){
                arr[k] = a[i];
                cout << arr[k] <<" ";
                i++;j++;k++;
            }
            else{
                arr[k] = b[j++];
                cout << arr[k] <<" ";k++;
            }
        }
        while(i<n){
            arr[k] = a[i++];
            cout << arr[k] <<" ";
            k++;
        }
        while(j<m){
            arr[k] = a[j++];
            cout << arr[k] <<" ";
            k++;
        }
        return k+1;
    }
};

//{ Driver Code Starts.

int main() {
	int a[100], b[100];
	
	

	    
	    int n, m;
	    n =5,m=3;
	   
	    for(int i = 0;i<n;i++)
	        a[i]= i+1;
	       
	    for(int i = 0;i<m;i++)
	       b[i] = i+1;
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	
	return 0;
}
// } Driver Code Ends