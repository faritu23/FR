#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   22-05-2024
    Time:   01:21:15
    File:   Sum_of_Three_Values.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k; cin>>n>>k;
    
    vector<ll> v(n),v1;
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    v1=v;
    sort(v1.begin(),v1.end());

    ll a,b,c,ai,bi,ci;
    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        if(v1[i]<=k)
        {
            ll s=k-v1[i];
            ll l=i+1,r=n-1;
            while(l<r)
            {
                if(v1[l]+v1[r]==s)
                {
                    flag=true;
                    a=v1[i];b=v1[l];c=v1[r];
                    
                    // cout<<a<<" "<<b<<" "<<c;
                    break;
                }
                else if(v1[l]+v1[r]<s)
                {
                    l++;
                }
                else r--;
            }
            if(flag) break;
        }
    }
    if(flag)
    {
        bool f1=false,f2=false,f3=false;
        for(int i=0;i<n;i++)
        {
            if(!f1 && v[i]==a)
            {
                ai=i;
                f1=true;
            }
            else if(!f2&&v[i]==b)
            {
                bi=i;
                f2=true;
            }
            else if(!f3&& v[i]==c)
            {
                ci=i;
                f3=true;
            }
        }
        cout<<ai+1<< " "<<bi+1<<" "<<ci+1<<endl;

    }
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}