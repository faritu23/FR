#include<bits/stdc++.h>
#define ll long long int
using namespace std;
map<int,int> mp;
void prime_factorization(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        mp[i]++;
        while(n%i==0)
        {
            n/=i;
        }
    }
    if(n>1) mp[n]++;
}
int main()
{
/*
    Author: FRK
    Date:   14-05-2024
    Time:   22:03:27
    File:   B_Bash_s_Big_Day.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        prime_factorization(v[i]);
    }
    int mx=1;
    for(auto i:mp)
    {
        mx=max(mx,i.second);
    }
    cout<<mx<<endl;
    return 0;
}