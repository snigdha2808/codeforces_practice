#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=9)
        {
            cout<<n<<endl;
        }
        else if(n>45)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int x=n;
            vector<int> v;
            int bigEl = 9;
            int sum = 0;
            while (x!=sum){
                if ((x-sum)>bigEl){
                    sum+=bigEl;
                    v.push_back(bigEl);
                    bigEl--;
                } else{
                    v.push_back(x-sum);
                    sum=x;
                }
            }
            for (int j = v.size()-1; j >=0 ; j--) {
                cout<<v[j]<<"";
            }
            cout<<"\n";
        }
    }
}