#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long a,b,c,d;cin>>a>>b>>c>>d;
        long long s=b;
        double x,y,div;
        if(b>=a)
        cout<<b<<endl;
        else
        {
            if(c>d)
           {x=a-b;
            y=c-d;
            div=ceil(x/y);
            s=s+c*(div);
            cout<<s<<endl;
           }
           else
           cout<<"-1"<<endl;
            
        }

    }
}