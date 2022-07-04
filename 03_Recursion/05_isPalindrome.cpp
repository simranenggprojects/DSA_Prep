/*
Problem Link
https://www.codingninjas.com/codestudio/problems/check-palindrome_4219630
*/

bool isPalindromeHelper(string &s,int i,int j){
    
    if(i >= j) return true;
    if(s[i] != s[j]) return false;
    return isPalindromeHelper(s,i+1,j-1);
    
}

bool isPalindrome(string &s)
{
	return isPalindromeHelper(s,0,s.length()-1);
}

/*
Iterative Solution:
-----------------------
for(int i=0, j=s.length()-1;i<s.length();i++,j--){
        if (s[i] != s[j])
            return 0;
}
return 1;
*/
