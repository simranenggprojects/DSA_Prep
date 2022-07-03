/*
Program: Sum of 'n' natural numbers using recursion
*/

#include<bits/stdc++.h>
using namespace std;

int sum(int n){
	
	if (n == 1) return 1;
	return n + sum(n-1);
	
}

int main(){
	
	// test cases to check ans
	for(int i=1;i<=20;i++){
		
		int ans1 = i*(i+1)/2;
		int ans2 = sum(i);
		
		cout << ans1 << " " << ans2 << " " << ((ans1 == ans2) ? "Passed" : "Not passed") << endl;
	}	
}
