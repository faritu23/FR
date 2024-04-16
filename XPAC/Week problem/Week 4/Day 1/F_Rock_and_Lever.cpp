#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<long long int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<long long int,long long int>mp;
        for(int i=0;i<n;i++)
        {
            // cout<<__lg(a[i])<<" ";
            mp[__lg(a[i])]++;
        }
        long long int sum=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            sum+=(((it->second)*((it->second)-1))/2);
        }
        cout<<sum<<endl;
    }
    return 0;
}