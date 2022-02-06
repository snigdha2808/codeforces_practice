#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int c=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int j=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i] % 2==0)
            {
                j++;
                swap(arr[i],arr[j]);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(arr[i],2*arr[j])>1)
                c++;
            }
        }
        cout<<c<<endl;
    }
}