#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    int f, t; 
    int m=INT_MIN;
    while(n--)
    {
        cin>>f>>t;
        if (t<=k) 
        {
            m=max(m,f);
        } 
        else 
        {
            m=max(m,f-(t-k));
        }
    }
    cout<<m;
}