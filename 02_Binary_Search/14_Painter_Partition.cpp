/*
Problem Link
https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
*/

class Solution
{
  public:
  
    int min(int arr[],int n){
        int m = arr[0];
        for(int i=1;i<n;i++){
            if(m < arr[i])
                m = arr[i];
        }
        return m;
    } 
    
    bool isAllocationPossible(int arr[],int n, int k, long long maxtime){
        
        int worker = 1, boards = 0;
        for(int i=0; i<n ; i++){
            
            if (boards + arr[i] > maxtime){
                worker++;
                boards = arr[i];
                if (worker > k) return false;
            }
            else{
                boards += arr[i];
            }
            
        }
        
    }
  
    long long minTime(int arr[], int n, int k)
    {
        long long sum = 0;
        long long l = min(arr,n);
        long long h = accumulate(arr,arr+n,sum);
        
        long long ans = -1;
        
        while(l <= h){
            long long mid = l + (h-l)/2;
            
            if(isAllocationPossible(arr,n,k,mid)){
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
