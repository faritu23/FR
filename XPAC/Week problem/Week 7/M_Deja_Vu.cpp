#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   12-05-2024
    Time:   16:18:13
    File:   B_Deja_Vu.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n,q;cin>>n>>q;
        vector<ll>a(n);
        vector<int>x(q);
        int f[31]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<q;i++)
        {
            cin>>x[i];
            f[x[i]]++;
        }
        vector<int> v;
        for(int i=0;i<q;i++)
        {
            if(f[x[i]]!=0)
            {
                v.push_back(x[i]);
                f[x[i]]=0;
            }
        }
        
        for(int i=0;i<v.size();i++)
        {
            ll b=pow(2,v[i]);
            ll c=pow(2,(v[i]-1));
            for(int i=0;i<n;i++)
            {
                if(a[i]%b==0)
                {
                    a[i]+=c;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}