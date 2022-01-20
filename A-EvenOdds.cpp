#include<iostream>
using namespace std;
int main()
{
    long long int n,k;
    long long int e=0;
    long long int a;
    cin>>n>>k;
    if(n%2==0)
    {
        e=(n/2);
    }
    else{
        e=(n/2)+1;
    }
    if(k<=e)
    {
        a=k*2-1;
        cout<<a;
        return 0;
    }
    a=(k-e)*2;
    cout<<a;
}