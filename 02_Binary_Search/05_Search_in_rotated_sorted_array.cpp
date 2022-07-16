/*
Problem Link:
https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array0959/1/
*/

int Search(vector<int> arr, int K) {
    
    int l = 0;
    int h = arr.size() - 1;
    
    while (l <= h){
        
        int mid = l + (h-l)/2;
        
        if (arr[mid] == K)
            return mid;
            
        else{
            
            // check which side is sorted left or right
            bool left = false, right = false;
            if(arr[l] < arr[mid-1])
                left = true;
            else
                right = true;
                
            if(left){ // left side is sorted
                if(K >= arr[l] &&  K < arr[mid]){ // check here
                    h = mid - 1; // reduce search to left side
                }
                
                else{
                    l = mid + 1; // reduce search to right side
                }
            }
            
            if(right){ // right side is sorted
                if(K > arr[mid] && K <= arr[h]){
                    l = mid + 1; // reduce search to right side
                }
                
                else{
                    h = mid - 1; // reduce search to left side
                }
            }
            
        }
        
    }
    
    return -1;
    
}
