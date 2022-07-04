/*
Problem Link:
https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298
*/

void reverseArrayHelper(vector <int> &arr, int start, int end)
{
    if(start >= end) return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArrayHelper(arr,start+1,end-1);
}

void reverseArray(vector<int> &arr , int m)
{
	reverseArrayHelper(arr,m+1,arr.size()-1);
}

/*
Iterative Solution:
---------------------
for(int i=m+1, j=arr.size()-1;i<j; i++,j--){
     int temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp;
}
*/

