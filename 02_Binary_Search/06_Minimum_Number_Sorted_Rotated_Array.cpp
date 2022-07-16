/*
Problem Link
https://practice.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1
*/

int findMin(int arr[], int n){
        
        int l = 0;
        int h = n - 1;
        
        while(l <= h){
            
            int mid = l + (h-l)/2;
            
            if((mid == 0 || arr[mid] < arr[mid-1]) && (mid == n-1 || arr[mid] < arr[mid+1]))
                return arr[mid];
                
            else{
                
                int a,b=INT_MAX,c=INT_MAX,d;
                
                a = arr[l];
                if (mid != 0)
                    b = arr[mid-1];
                if (mid != n - 1)
                    c = arr[mid+1];
                d = arr[h];
                
                int minimum = min(a,min(b,min(c,d)));
                
                if(minimum == a || minimum == b)
                    h = mid - 1;
                    
                else
                    l = mid + 1;
                
            }
            
        }
        
}

