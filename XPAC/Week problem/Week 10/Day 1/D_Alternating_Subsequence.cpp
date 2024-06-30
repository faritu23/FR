
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int pos_neg(ll a)
{
    if(a>0)return 1;
    else return -1;
}
int main()
{
/*
    Author: FRK
    Date:   25-06-2024
    Time:   19:57:16
    File:   C_Alternating_Subsequence.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            ll cur=v[i];
            int j=i;
            while(j<n && pos_neg(v[i])==pos_neg(v[j]))
            {
                cur=max(v[j],cur);
                j++;
            }
            sum+=cur;
            i=j-1;
            
        }
        cout<<sum<<endl;
    }
    return 0;
}
