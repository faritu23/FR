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
    Time:   12:51:23
    File:   C_Joty_and_Chocolate.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,a,b,p,q;cin>>n>>a>>b>>p>>q;
    ll red=(n/a)*p;
    ll bule=(n/b)*q;
    ll overlap=n/(lcm(a,b));
    ll remove_overlap=(overlap*(p+q));
    ll add=(overlap*(max(p,q)));
    ll ans=red+bule-remove_overlap+add;
    cout<<ans<<endl;
    
    return 0;
}