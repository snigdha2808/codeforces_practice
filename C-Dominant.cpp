#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int c=0;
        int max1=*max_element(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1])
            {
                c++;
            }
        }
        if(c==(n-1))
        {
            cout<<"-1"<<endl;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==max1)
            {
                if(i-1>=0 && v[i]>v[i-1])
                {
                    cout<<i+1<<endl;
                    break;
                }
                else if(i+1<n && v[i]>v[i+1])
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
}