/*
Problem Link
https://www.geeksforgeeks.org/search-an-element-in-given-n-ranges/
*/

#include<bits/stdc++.h>
using namespace std;

int findNumberNaive(pair<int,int> arr[],int n,int k)
{
	for(int i=0;i<n;i++){
		if(arr[i].first <= k && k <= arr[i].second) return i;
	}
	
	return -1; // element not in any range
}

int findNumber(pair<int,int> arr[],int n,int k)
{
	int l = 0;
	int h = n - 1;
	int ans = -1;
	int mid;
	
	while(l <= h){
		
		mid = l + (h-l)/2;
		
		if(arr[mid].first <= k && k <= arr[mid].second)
			return mid;
			
		if(k > arr[mid].second)
			l = mid + 1;
		
		else
			h = mid - 1;
		
	}
	
	return ans; // element not found in any range
	
}

int main()
{
	
	pair<int,int> arr[] = {{1,3},{4,7},{8,11},{13,20}};
	vector<int> val = {-10,1,5,9,20,52}; // array for values of k to be tested
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << "{1,3},{4,7},{8,11},{13,20}" << endl;
	
	for(int k:val){
		cout << "k="<<k<<endl;
		cout << findNumberNaive(arr,n,k) << endl;
		cout << findNumber(arr,n,k) << endl;
		cout << endl;
	}
	
	return 0;
}
