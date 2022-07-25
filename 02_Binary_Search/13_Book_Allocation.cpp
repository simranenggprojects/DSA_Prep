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
    

    int sum_of_array(int arr[], int N){
            int s = 0;
            for(int i=0;i<N;i++)
                s += arr[i];
            return s;
    } 
        
    // allocate pages as per m
    pair<int,int> allocatePages(int arr[],int N, int K){
        
        int runningsum = 0, m = 0, max = 0;
        
        for(int i=0;i<N;i++){
            
            runningsum += arr[i];
            
            if(runningsum == K){
                if(max < runningsum)
                    max = runningsum;
                runningsum = 0;
                m++;
            }
            
            else if (runningsum > K)
            {
                runningsum -= arr[i];
                if (max < runningsum)
                    max = runningsum;
                m++;
                runningsum = 0;
                i--;
            }
        }
        
        if (runningsum != 0)
            m++;
        
        return {m,max};
        
    }
        
    //Function to find minimum number of pages.
    int findPages(int arr[], int N, int M) 
    {
        int l = arr[N-1];
        int h = sum_of_array(arr,N);
        int ans = -1,m,maxval;
        
        while(l <= h){
            
            int mid = l + (h-l)/2;
            
            pair<int,int> val = allocatePages(arr,N,mid);
            m = val.first;
            maxval = val.second;
            
            if (m == M){
                ans = maxval;
                h = mid - 1;
            }
            else if (m > M){
                l = mid + 1;
            } else{
                h = mid - 1;
            }
            
        }
        
        if (m < M){
            return maxval;
        }
        
        return ans;
        
        
    }
};
