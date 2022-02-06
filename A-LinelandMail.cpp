#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int c,d,e,f,mini=0,maxim=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            mini=arr[1]-arr[0];
            maxim=arr[n-1]-arr[0];
        }
        else if(i==(n-1))
        {
            mini=arr[n-1]-arr[n-2];
            maxim=arr[n-1]-arr[0];
        }
        else{
        c=abs(arr[i]-arr[i+1]);
        d=arr[i]-arr[i-1];
        mini=min(c,d);
        e=arr[n-1]-arr[i];
        f=arr[i]-arr[0];
        maxim=max(e,f);
        }
        cout<<mini<<" "<<maxim<<endl;
    }
    
}