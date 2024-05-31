#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll gcd(ll a,ll b)
{
    return __gcd(a,b);

}
ll lcm(ll a,ll b)
{
    return ((a/gcd(a,b))*b);
}
int main()
{
/*
    Author: FRK
    Date:   13-05-2024
    Time:   20:30:15
    File:   E_Fadi_and_LCM.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;
    map<ll,pair<ll,ll>>mp;
    ll mn=LLONG_MAX;
    
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0 && lcm(i,n/i)==n)
        {
            ll a=i;
            ll b=n/i;
            ll m=max(a,b);
            mn=min(m,mn);
            
        }
    }
    ll nnn=LLONG_MAX;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0 && lcm(i,n/i)==n )
        {
            ll a=i;
            ll b=n/i;
            ll m=max(a,b);
            nnn=min(m,nnn);
            if(nnn==mn)
            {
                cout<<a<<" "<<b<<endl;
                break;
            }
        }
    }
    return 0;
}