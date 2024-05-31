#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   16-05-2024
    Time:   12:21:52
    File:   D_Swords.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll a=v[n-1]-v[i];
        sum+=a;
        
    }
    ll g=0;
    for(int i=0;i<n-1;i++)
    {
        g=abs(__gcd(g,v[n-1]-v[i]));
    }
    cout<<sum/g<<" "<<g<<endl;
    return 0;
}