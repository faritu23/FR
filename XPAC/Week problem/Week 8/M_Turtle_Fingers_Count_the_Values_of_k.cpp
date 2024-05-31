#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll> divisor(ll k)
{
    vector<ll> v;
    for(ll i=1;i*i<=k;i++)
    {
        if(k%i==0)
        {
            v.push_back(i);
            if(k/i!=i)
            {
                v.push_back(k/i);
            }
        }
    }
    return v;
}
vector<ll> ppower(ll a)
{
    vector<ll>v;
    for(ll i=0;i<=20;i++)
    {
        ll ans=pow(a,i);
        if(ans<=1e6) v.push_back(ans);
        else break;
    }
    return v;
}
int main()
{
/*
    Author: FRK
    Date:   15-05-2024
    Time:   23:52:13
    File:   C_Turtle_Fingers_Count_the_Values_of_k.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
        ll a,b,k; cin>>a>>b>>k;
        vector<ll> v=divisor(k);
        vector<ll> aa=ppower(a);
        vector<ll> bb=ppower(b);
        ll cnt=0;
        for(ll i=0;i<(ll)v.size();i++)
        {
            ll f=0;
            for(ll j=0;j<(ll)aa.size();j++)
            { 
                for(ll m=0;m<(ll)bb.size();m++)
                {
                    if(v[i]*aa[j]*bb[m]==k) 
                    {
                        cnt++;
                        f=1;
                        break;
                    }
                }
                if(f==1) break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}