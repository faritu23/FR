#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   12-05-2024
    Time:   22:01:10
    File:   A_k_th_divisor.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n,k; cin>>n>>k;
    vector<ll>v;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i ==0)
        {
            v.push_back(i);
            if((n/i)!=i)
            {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<k)
    cout<<-1<<endl;
    else
    cout<<v[k-1]<<endl;
    return 0;
}