/*
Problem Link
https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1
*/

#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       int low = 0;     // start index of current array
       int high = N-1;  // end index of current array
       
       while (low <= high)
       {
           int mid = (high + low)/2;
           
           if (arr[mid] == K)
           {
               return 1;
           }
           
           if (arr[mid] < K) // must go to right
           {
               low = mid + 1;
           }
           
           else             // must go on left
           {
               high = mid - 1;
           }
           
       }
       
       return -1; // element not present
       
    }
};


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 
