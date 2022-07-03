/*
Problem Link:
https://www.codingninjas.com/codestudio/problems/nth-fibonacci-number_74156
*/

// Series: 1 1 2 3 5 8 13

#include<bits/stdc++.h>
using namespace std;

int fibo(int N){
    if (N == 1 || N == 2)
        return 1;
    return fibo(N-1) + fibo(N-2);
}

int main()
{
    unsigned int N;
    cin >> N;
    cout << fibo(N) << endl;
    
    return 0;
}
