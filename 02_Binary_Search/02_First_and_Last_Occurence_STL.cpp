#include<bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n , int k )
{
    
    // multiple occurences -> 1 5 o/p
    // single occurence    -> 1 1 o/p
    // no occurence        -> -1 -1 o/p
    
    int occ_low = -1, occ_high = -1;
    
    if (binary_search(arr,arr+n,k))
    {
        occ_low = lower_bound(arr,arr+n,k) - arr;
        occ_high = upper_bound(arr,arr+n,k) - arr - 1;
    }
    
    return {occ_low, occ_high};
    
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
