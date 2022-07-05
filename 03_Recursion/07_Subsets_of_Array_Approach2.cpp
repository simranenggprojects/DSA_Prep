/*
Problem Link
https://www.codingninjas.com/codestudio/problems/power-set_1062667
*/

// Approach: 
// Option 1: include 'ith' element in subset
// Option 2: dont include 'ith' element in subset

void helper(vector<int> v,int i,vector<int> &subSet,vector<vector<int>> &ans)
{
    if ( i == v.size() ){
        ans.push_back(subSet);
        return;
    }
    
    // including ith element
    subSet.push_back(v[i]);
    helper(v,i+1,subSet,ans);
    
    // not including the ith element
    subSet.pop_back();
    helper(v,i+1,subSet,ans);
}


vector<vector<int>> pwset(vector<int>v)
{
    vector<vector<int>> ans;
    vector<int> subSet;
    helper(v,0,subSet,ans);
    return ans;
}
