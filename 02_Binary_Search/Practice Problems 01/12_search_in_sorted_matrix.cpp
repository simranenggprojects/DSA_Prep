#include<bits/stdc++.h>
using namespace std;

const int m=4;
const int n=5;

int bsearch1(int arr[][n],int m,int n, int x)
{
	int l = 0;
	int h = m - 1;
	int ans = -1;
	
	while(l <= h){
		
		int mid = l + (h-l)/2;
		
		if(arr[mid][0] <= x && x <= arr[mid][n-1]) return mid; // element may be present in row middle
		else if(arr[mid][n-1] < x)
			l = mid + 1;
		else
			h = mid - 1;
		
	}
	
	return ans;
	
}

int bsearch2(int arr[][n],int m,int n, int x)
{
	int l = 0;
	int h = n - 1;
	int ans = -1;
	
	while(l <= h){
		int mid = l + (h-l)/2;
		
		if(arr[m][mid] == x) return mid;
		else if(arr[m][mid] < x)
			l = mid + 1;
		else
			h = mid - 1;
	}
	
	return ans;
	
}

void findElement(int arr[][n],int m,int n, int x)
{
	int j = bsearch1(arr,m,n,x); // to obtain the row
	if (j == -1){
		cout << "Element " << x << " not found!" << endl;
		return;
	}
	int k = bsearch2(arr,j,n,x);
	if(k == -1){
		cout << "Element " << x << " not found!" << endl;
		return;
	}
	cout << "Element " << x << " found at index (" << j << "," << k << ")\n";
}

int main()
{
	int arr[][n] = {{0, 6, 8, 9, 11},
                     {20, 22, 28, 29, 31},
                     {36, 38, 50, 61, 63},
                     {64, 66, 100, 122, 128}};
                     
    cout << "{0, 6, 8, 9, 11}\n{20, 22, 28, 29, 31}\n{36, 38, 50, 61, 63}\n{64, 66, 100, 122, 128}" << endl;
    
    vector<int> val = {-1,8,130,22,20,63,122,66,128};
    for(int x:val)                 
    	findElement(arr,m,n,x);
}
