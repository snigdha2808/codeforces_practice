#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string t;
    cin>>t;
    int i=0,cnt=1;
    while(n!=i)
    {
        i=(cnt*(cnt+1)/2);
        cout<<t[i-1];
        cnt++;
    }
}