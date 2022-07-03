/*
Problem Link:
https://practice.geeksforgeeks.org/problems/square-root/1/
*/

#include<bits/stdc++.h>
using namespace std;

// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
      long long int l = 1, h = x/2, ans=1;
      
      while (l <= h){
          
          long long mid = l + (h - l)/2;
          long long int sqr = mid * mid;
          
          if (sqr > x){
              h = mid - 1;  // search in smaller range
          } else if (sqr < x){
              ans = mid;    // mid can be potential ans if it's not perfect square
              l = mid + 1;
          } else{
              return mid;
          }
          
      }
      
      return ans;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
