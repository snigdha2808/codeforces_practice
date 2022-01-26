#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int s=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<m;i++)
    {
        if(arr[i]<0)
        {
            s=s+arr[i];
        }
    }
    cout<<s*(-1);
}