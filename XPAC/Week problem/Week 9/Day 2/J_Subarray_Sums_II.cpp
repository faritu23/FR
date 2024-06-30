#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   02-06-2024
    Time:   16:43:16
    File:   J_Subarray_Sums_II.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;cin>>n>>k;
    vector<ll>  v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<ll,ll>mp;
    mp[0]++;
    ll sum=0,s=0,ans=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        s=sum-k;
        if(mp.find(s)!=mp.end())
        {
            ans+=mp[s];
            // cout<<ans<<endl;

        }
        mp[sum]++;
    }
    cout<<ans<<endl;
    return 0;
}