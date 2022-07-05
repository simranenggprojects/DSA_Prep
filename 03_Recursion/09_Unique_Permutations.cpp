/*
Problem Link
https://www.codingninjas.com/codestudio/problems/all-unique-permutations_1094902
*/
#include<bits/stdc++.h>

void helper(vector<int> &arr, int pos, vector<vector<int>> &ans){
    
    if(pos == arr.size()){
        ans.push_back(arr);
        return;
    }
    
    for(int i=pos;i<arr.size();i++){
        swap(arr[i],arr[pos]);
        helper(arr,pos+1,ans);
        swap(arr[i],arr[pos]); // undo change
    }
    
}

vector<vector<int>> uniquePermutations(vector<int> &arr, int n) {
	vector<vector<int>> ans,ans_set;
    helper(arr,0,ans);
    set<vector<int>> finalAns; // for unique ans
    for(vector<int> x:ans){
        finalAns.insert(x);
    }
    for(vector<int> x: finalAns){
        ans_set.push_back(x);
    }
    return ans_set;
}
