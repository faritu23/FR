#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        vector<long long int> v(n);
        long long int mx=LLONG_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mx=max(mx,v[i]);
        }

        long long int cnt1=0,cnt2=0;
        while(mx>0)
        {
            mx/=2;
            cnt1++;
        }
        cout<<cnt1<<endl;
    }

    return 0;
}