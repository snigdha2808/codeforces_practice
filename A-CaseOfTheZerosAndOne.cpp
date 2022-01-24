#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s;cin>>s;
    int i=0;
    while((i+1)!=n && n!=0)
    {
        if((s[i]=='0' && s[i+1]=='1')||(s[i]=='1' && s[i+1]=='0'))
        {
            s.erase(s.begin()+i);
            s.erase(s.begin()+i);
            if(i>0)
            i--;
            n-=2;
		}
        else
		{
        	i++;
		}
    }
    cout<<n;
}