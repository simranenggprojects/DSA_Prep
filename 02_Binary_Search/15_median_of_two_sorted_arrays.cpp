/*
Problem Link
https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1
*/

class Solution{
    public:
    double MedianOfArrays(vector<int>& arr1, vector<int>& arr2)
    {
        
        int n1 = arr1.size();
        int n2 = arr2.size();
        
        // smaller array must be first array
        if (n1 > n2){
            return MedianOfArrays(arr2,arr1);
        }
        
        double ans = -1;
        
        int low = 0;
        int high = n1;
        
        while(low <= high){
            
            int cut1 = low + (high-low)/2;
            int cut2 = (n1+n2)/2 - cut1;
            
            int l1 = cut1==0 ? INT_MIN : arr1[cut1-1];
            int l2 = cut2==0 ? INT_MIN : arr2[cut2-1];
            int r1 = cut1==n1 ? INT_MAX : arr1[cut1];
            int r2 = cut2==n2 ? INT_MAX : arr2[cut2];
            
            if (l1 > r2){ // search space to left hand side
                high = cut1 - 1;
            }
            else if(l2 > r1){ // search space to right hand side
                low = cut1 + 1;
            }
            else{ // correct partition
                if ((n1+n2)%2 == 0){
                    return (max(l1,l2) + min(r1,r2))/double(2);
                    
                }else{
                    return min(r1,r2); // one extra element is in rhs
                }
            }
            
        }
        
        return ans;
        
    }
};
