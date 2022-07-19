/*
Problem Link
https://www.geeksforgeeks.org/find-square-root-number-upto-given-precision-using-binary-search/
*/

#include<bits/stdc++.h>
using namespace std;

float findSqrt(int num){
	
	if(num == 0)
		return 0;
	
	int l = 0;
	int h = num/2;
	float ans = 1;
	
	while(l <= h){
		
		int mid = l + (h-l)/2;
		
		if(mid*mid == num) return mid;
		
		else if(mid*mid < num){
			ans = mid;
			l = mid + 1;
		}
		
		else{
			h = mid - 1;
		}
		
	}

	// for precision
	float precision = 0.1;
	for(int i=0;i<2;i++){
		while(ans*ans <= num)
			ans += precision;
		if(ans*ans == num)
			return ans;
		ans = ans - precision;
		precision /= 10;
	}

	return ans;
}

int main(){
	
	for(int i=0;i<10;i++){
		int num = rand();
		cout << num << endl;
		cout << fixed << setprecision(3) << sqrt(num) << endl;
		cout << fixed << setprecision(2) << findSqrt(num) << endl;
		cout << endl;
	}
	
	return 0;
}
