#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   02-06-2024
    Time:   01:12:31
    File:   K_Subarray_Divisibility.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n; cin>>n;
    vector<ll> v(n);
    vector<ll>prefix_sum(n);
    for(int i=0;i<n;i++)cin>>v[i];
    prefix_sum[0]=v[0];
    for(int i=1;i<n;i++) prefix_sum[i]=v[i]+prefix_sum[i-1];
    for(int i=0;i<n;i++) prefix_sum[i]=((prefix_sum[i]%n)+n)%n;
    map<ll,ll> mp;
    mp[0]++;
 
    ll count=0;
    for(int i=0;i<n;i++)
    {
        if(mp.find(prefix_sum[i])!=mp.end())
        {
            count+=mp[prefix_sum[i]];
            mp[prefix_sum[i]]++;
        }
        else
        {
            mp[prefix_sum[i]]++;
 
        }
    }
    cout<<count<<endl;
    return 0;
}