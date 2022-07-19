/*
Problem Statement
Search insert position of K in a sorted array

Problem Link
https://practice.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1
*/

int searchInsertK(vector<int>arr, int N, int K)
{
        int l = 0;
        int h = N - 1;
        int ans = -1;
        int mid;
        
        while (l <= h){
            
            mid = l + (h-l)/2;
            
            if(arr[mid] == K) return mid;
            
            else if(arr[mid] > K){
                ans = mid;
                h = mid - 1;
            }
            
            else{
                l = mid + 1;
            }
            
        }
        
        if (ans == -1) 
            return l;
        else
            return ans;
        
}
