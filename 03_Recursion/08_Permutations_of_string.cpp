#include<bits/stdc++.h>
void helper(string &str, int pos, vector<string> &ans)
{
        if (pos >= str.size()){
            ans.push_back(str);
            return;
        }
    
        for(int i=pos;i<str.length();i++){
            swap(str[i],str[pos]);
            helper(str,pos+1,ans);
            swap(str[i],str[pos]); // undo the change
        }
}

vector<string> generatePermutations(string &str)
{
    vector<string> ans;
    helper(str,0,ans);
    sort(ans.begin(),ans.end()); // for lexiographically increasing
    return ans;
}
