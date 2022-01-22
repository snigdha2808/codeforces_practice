#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long temp,temp1;
    cin>>n;
    if(n>=0)
    cout<<n;
    else
    {
        temp=n;
        temp1=n;
        n/=10;
        temp1/=100;
        temp1=(temp1*10+(temp-n*10));
        cout<<max(temp1,n);
    }   
}