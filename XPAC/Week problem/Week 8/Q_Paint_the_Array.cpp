#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    /*
        Author: FRK
        Date:   16-05-2024
        Time:   20:40:28
        File:   C_Paint_the_Array.cpp
    */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        ll mx = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        vector<ll> v1;
        vector<ll> v2;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                v1.push_back(v[i]);
            else
                v2.push_back(v[i]);
        }

        
        bool flag1=true;
        bool flag2=true;
        ll g1=0,g2=0;
        for(int i=0;i<v1.size();i++)
        {
            g1=__gcd(g1,v1[i]);
        }
        for(int i=0;i<v2.size();i++)
        {
            g2=__gcd(g2,v2[i]);
        }

        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]%g2==0)
            {flag1=false;
            break;}
        }
        for(int i=0;i<v2.size();i++)
        {
            if(v2[i]%g1==0)
            {flag2=false;
            break;}
        }
        if(flag1) cout<<g2<<endl;
        else if(flag2) cout<<g1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}