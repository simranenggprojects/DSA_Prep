/*
Problem Link:
https://www.codingninjas.com/codestudio/problems/factorial-of-a-number_1115779
*/

#include <iostream>
using namespace std;

int factorial(int n)
{  
    if (n == 0)
        return 1;
    return n * factorial(n-1);
}

int main() {

    int n;
    cin >> n;
    
    if (n < 0){
        cout << "Error" << endl;
    }
    else{
        cout << factorial(n);
    }
    
    return 0;
}
