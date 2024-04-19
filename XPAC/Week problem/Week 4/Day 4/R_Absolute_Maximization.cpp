#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        int mn=INT_MAX;int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mn=min(mn,v[i]);
            mx=max(mx,v[i]);
        }
        sort(v.begin(),v.end());
        int ans=INT_MIN;
        int a=0;
        int b=INT_MAX;
        for(int i=0;i<n;i++)
        {
            a=a|v[i];
            b=b&v[i];
            

        }
        ans=a-b;
        cout<<ans<<endl;


    }
    return 0;
}