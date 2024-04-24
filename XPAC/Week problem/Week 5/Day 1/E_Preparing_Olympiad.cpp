#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void bitmasks(ll a[],ll n,ll l,ll r,ll x)
{
    vector<string> bitmask;
    for(int i=1;i<(1<<n);i++)
    {
        string s;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                s+='1';
            }
            else
            {
                s+='0';
            }
        }
        bitmask.push_back(s);
    }

    vector<vector<ll>> sbset;

    for(int i=0;i<bitmask.size();i++)
    {
        vector<ll> v;
        string s=bitmask[i];
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='1')v.push_back(a[j]);
        }
        sort(v.begin(),v.end());
        sbset.push_back(v);

    }
    
    ll count=0;
    for(auto v:sbset)
    {

        ll sum=0; ll dis=v[v.size()-1]-v[0];
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        if(sum>=l && sum<=r && dis>=x)
        {
            count++;
        }
    }
    cout<<count<<endl;
    
}
int main()
{
    
    ll n,l,r,x;
    cin>>n>>l>>r>>x;

    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bitmasks(a,n,l,r,x);
    return 0;
}