#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   10-05-2024
    Time:   13:46:26
    File:   F_We_Were_Both_Children.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]<=n) m[v[i]]++;
        }
        vector<ll> a(n+1,0);
        
        for(ll i=1;i<=n;i++)
        {
            if(m[i]!=0)
            {
                for(ll j=i;j<=n;j+=i)
                {
                    a[j]+=m[i];
               
                }
            }
        }
        cout<<*max_element(a.begin(),a.end())<<endl;
    }
    return 0;
} 
