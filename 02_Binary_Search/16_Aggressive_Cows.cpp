/*
Problem Link
https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559
*/

// to find if allocation is possible as per distance
bool isAllocationPossible(vector<int> &arr, int cows, int dist){
    int n = arr.size();
    int no_of_cows = 1, alloted = arr[0];
    
    for(int i=1; i<n ; i++){
        
        int diff = arr[i] - alloted;
        if (diff >= dist){
            alloted = arr[i];
            no_of_cows++;
            if (no_of_cows == cows) return true;
        }
        
    }
    
    return false;
    
}

// function to find maximum of the minimum distance
int aggressiveCows(vector<int> &arr, int cows)
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int l = 1;
    int h = arr[n-1] - arr[0];
    int ans = -1;
    
    while (l<=h){
        
        int mid = l + (h-l)/2;
        
        if (isAllocationPossible(arr,cows,mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
        
    }
    
    return ans;
    
}
