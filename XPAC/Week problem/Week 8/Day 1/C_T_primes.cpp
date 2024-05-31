#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll m=1e7;
vector<bool>prim(m+1,true);
void pp()
{
    prim[1]=false;
    for(ll i=2;i*i<=m;i++)
    {
        if(prim[i])
        {
            for(ll j=i*i;j<=m;j+=i)
            {
                prim[j]=false;
            }
        }
    }
}
bool perfectPrime(ll n)
{
    ll x=sqrtl(n);
    return (x*x)==n;
}
int main()
{
/*
    Author: FRK
    Date:   13-05-2024
    Time:   16:41:10
    File:   B_T_primes.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    pp();
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll x=sqrtl(n);
        if(prim[x] && perfectPrime(n))
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}