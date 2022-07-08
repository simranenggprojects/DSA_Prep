/*
Program: Electricity Bill Calculator

units        cost per unit
---------------------------
0 - 100       0
100 - 200     5
200 - 300     10
300+          12

examples
------------
I/P: 280
O/P: 1300

I/P: 350
O/P: 2100
*/

#include<iostream>
using namespace std;

int main(){
	
	unsigned int units, billamt = 0;
	cout << "Enter number of units: ";
	cin >> units;
	
	if (units < 100){
		billamt = 0;
	}
	else if(units < 200){
		billamt = 0 * 100 + 5 * (units-100);
	}
	else if(units < 300){
		billamt = 0 * 100 + 5 * 100 + 10 * (units-200);
	}
	else{
		billamt = 0 * 100 + 5 * 100 + 10 * 100 + 12 * (units-300);
	}
	
	cout << "Bill amount: " << billamt;
	
	return 0;
}
