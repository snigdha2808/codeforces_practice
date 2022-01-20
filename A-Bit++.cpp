#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0,d=0;
    int cal=0;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        if(a[1]=='+')
        {
            c++;
        }
        else{
            c--;
        }
    }
    cout<<c;

}