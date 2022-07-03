/*
Problem Link
https://www.codingninjas.com/codestudio/problems/find-power-of-a-number_893198
*/

long long Pow(int X, int N)
{
    if (N == 0)
        return 1;
    return X * Pow(X,N-1);
}
