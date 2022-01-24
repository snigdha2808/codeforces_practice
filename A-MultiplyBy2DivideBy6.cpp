#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        unsigned long long int n,c=0;
        cin>>n;
        while(n>1)
        {
            if(n%6==0)
            {
                n/=6;
            }
            else
            {
                n*=2;
            }
            c=c+1;
        }
        if(n==1)
        {
            cout<<c<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}
