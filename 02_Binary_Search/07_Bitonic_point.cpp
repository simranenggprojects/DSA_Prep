/*
Problem Link
https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1
*/

int findMaximum(int arr[], int n) {
	    
	    int l = 0;
	    int h = n - 1;
	    
	    while (l <= h){
	        
	        int mid = l + (h-l)/2;
	        
	        if ((mid == n-1 || arr[mid] > arr[mid+1]) && (mid == 0 || arr[mid] > arr[mid-1]))
	            return arr[mid];
	            
	        if (mid == n-1 || arr[mid+1] > arr[mid])
	            l = mid + 1; // reduce search space to right
	            
	        else
	           h = mid - 1;  // reduce search space to left
	        
	    }
	    
	    return -1;
	    
}
