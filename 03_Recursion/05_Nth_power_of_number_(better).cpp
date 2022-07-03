/*
Problem Link
https://www.codingninjas.com/codestudio/problems/find-power-of-a-number_893198
*/

long long Pow(int X, int N)
{
    if (N == 0) return 1;
    
    long long temp = Pow(X,N/2);
    if (N % 2 == 0)
        return temp * temp;
    else
        return temp * temp * X;
        
}
