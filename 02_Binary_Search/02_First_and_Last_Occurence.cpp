/*
Problem Link
https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1/
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n , int k )
{
    
    // multiple occurences -> 1 5 o/p
    // single occurence    -> 1 1 o/p
    // no occurence        -> -1 -1 o/p
    int findHelper(int *arr, int n, int k, bool isLower);
    int occ_low = findHelper(arr,n,k,true);
    int occ_high = findHelper(arr,n,k,false);
    return {occ_low, occ_high};
    
}

int findHelper(int *arr, int n, int k, bool isLower)
{
    
    int l = 0, h = n-1, ans=-1;
    
    while(l <= h){
        
        int mid = l + (h - l)/2;
        
        if (arr[mid] < k){  // go to right
            l = mid + 1;
        } 
        
        else if (arr[mid] > k){ // go to left
            h = mid - 1;
        } 
        
        else{  // equal
            
            ans = mid;
            
            if (isLower)
                h = mid - 1; // go to left to search for prev occurence if there
            else
                l = mid + 1; // go to right to search for next occurence if there
        }
        
    }
    
    return ans;
    
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int arr[n],i;
        for(i=0 ; i<n ; i++)
        cin >> arr[i];
        vector<int> ans;
        ans = find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
