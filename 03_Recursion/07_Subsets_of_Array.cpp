/*
Problem Link:
https://www.codingninjas.com/codestudio/problems/power-set_1062667
*/

// ------------------------------
// For irrespective of order
// ------------------------------
// vector<vector<int>> pwsetHelper(vector<int> v, int i){
    
//     if (i >= v.size()) return {{}};
    
//     vector<vector<int>> partialAns = pwsetHelper(v,i+1);
    
//     // final ans
//     vector<vector<int>> ans;
    
//     // copy
//     for(vector<int> x : partialAns)
//         ans.push_back(x);
    
//     // add 'i' element to it
//     for(vector<int> x : partialAns){
//         x.push_back(v[i]);
//         ans.push_back(x);
//     }
    
//     return ans;
// }

// for ascending order
vector<vector<int>> pwsetHelper(vector<int> v, int i){
    
    if (i >= v.size()) return {{}};
    
    vector<vector<int>> partialAns = pwsetHelper(v,i+1);
    
    // final ans
    vector<vector<int>> ans;
    
    // copy
    for(vector<int> x : partialAns)
        ans.push_back(x);
    
    // add 'i' element to it
    for(vector<int> x : partialAns){
//         vector<int> temp;
//         temp.push_back(v[i]);
//         for(int y:x)
//             temp.push_back(y);
//         ans.push_back(temp);
           x.insert(x.begin(),v[i]);
           ans.push_back(x); 
    }
    
    return ans;
}


vector<vector<int>> pwset(vector<int>v)
{
    return pwsetHelper(v,0);
}

/*
vector<vector<int>> pwsetHelper(vector<int>v, int i)
{
    if ( i >= v.size() ) return {{}};
    
    // recursion - do your work
    vector<vector<int>> partialAns = pwsetHelper(v,i+1);
    
    // my work
    // step 1 - copy
    vector<vector<int>> ans;
    for(vector<int> x : partialAns){
        ans.push_back(x);
    }
    
    // step 2 - add 'i'th element to copy in ans
    for(vector<int> x : partialAns){
        x.insert(x.begin(),v[i]);
        ans.push_back(x);
    }
    
    return ans;
    
}

vector<vector<int>> pwset(vector<int>v)
{
    return pwsetHelper(v,0);
}
*/
