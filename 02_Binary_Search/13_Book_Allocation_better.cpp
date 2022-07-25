/*
Problem Link
https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

11
13 31 37 45 46 54 55 63 73 84 85
9
O/P: 85

11
3 5 12 16 33 39 65 67 76 90 93
6
O/P: 104
*/

class Solution 
{
    public:
    // find if allocation is possible or not
    bool isAllocationPossible(int arr[],int N, int M, int maxpages){
        
        int student = 1, currpages = 0;
        
        for(int i=0; i<N; i++){
            
            if(currpages + arr[i] > maxpages){
               student++;
               currpages = arr[i];
               if (student > M) return false;
            }
            else{
                currpages += arr[i];
            }
            
        }
        
        return true;
        
    }
    
    //Function to find minimum number of pages.
    int findPages(int arr[], int N, int M) 
    {
        
        if (N < M) // lesser books than students
            return -1;
        
        int sum = 0;
        int l = arr[N-1], h = accumulate(arr , arr+N , sum);
        int ans = -1;
        
        while (l <= h){
            
            int mid = l + (h-l)/2;
            
            if(isAllocationPossible(arr,N,M,mid)){
                ans = mid;
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
            
        }
        
        return ans;
        
    }
};
