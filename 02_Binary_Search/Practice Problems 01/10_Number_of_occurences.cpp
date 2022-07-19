/*
Problem Link
https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1
*/

int count(int arr[], int n, int x) {
	    
	    if(binary_search(arr,arr+n,x)){
	        int low_occ = lower_bound(arr,arr+n,x) - arr;
	        int high_occ = upper_bound(arr,arr+n,x) - arr - 1;
	        return (high_occ - low_occ + 1);
	    }
	    
	    else{
	        return 0; // element not present
	    }
	    
}
