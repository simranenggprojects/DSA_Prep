/*
Problem Link
https://www.codingninjas.com/codestudio/problems/all-unique-permutations_1094902
*/

/*
Resource
https://www.geeksforgeeks.org/set-in-cpp-stl/
*/

#include<bits/stdc++.h>

void helper(vector<int> &arr, int pos, vector<vector<int>> &ans){
    
    if(pos == arr.size()){
        ans.push_back(arr);
        return;
    }
    
    unordered_set<int> m;
    
    for(int i=pos;i<arr.size();i++){
        if(m.find(arr[i]) != m.end())    continue; // if element found continue
        m.insert(arr[i]);
        swap(arr[i],arr[pos]);
        helper(arr,pos+1,ans);
        swap(arr[i],arr[pos]); // undo change
    }
    
}

vector<vector<int>> uniquePermutations(vector<int> &arr, int n) {
	vector<vector<int>> ans;
    helper(arr,0,ans);
    return ans;
}
