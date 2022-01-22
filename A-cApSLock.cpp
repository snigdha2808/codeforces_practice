#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=1;
    for(int i=1;i<=s.size();i++)
    {
        if(s[i]>=97)
        {
            c--;
            break;
        }
    }
    if(c==1)
    {
    for(int i=0;i<=s.size();i++)
    {
        if(s[i]>=97)
        {
            s[i]=s[i]-32;
        }
        else
        {
            s[i]=s[i]+32;
        }
    }
    }
    cout<<s;
}