#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=0,d=0;
    while(t--)
    {
        int c=0,d=0;
        string s;
        cin>>s;
        int mini=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                c++;
            }
            else
            {
                d++;
            }
        }
        mini=min(c,d);
        if(mini%2==0)
        {
            cout<<"NET"<<endl;
        }
        else
        {
            cout<<"DA"<<endl;
        }
    }
}