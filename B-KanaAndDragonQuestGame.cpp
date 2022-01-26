#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,n,m;
        int a,b;
        cin>>x>>n>>m;
        while(x>20 && n>0)
        {
            x=floor(x/2)+10;
            n--;
        }
        while(x>0 && m>0)
        {
            x=x-10;  
            m--; 
            /*if(x>0)
            {
                b=1;
                break;
            }*/
        }
        if(x>0)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}