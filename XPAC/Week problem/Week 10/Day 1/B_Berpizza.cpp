#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   24-06-2024
    Time:   17:10:26
    File:   C_Berpizza.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    set<pair<ll,ll>>s1;
    set<pair<ll,ll>>s2;
    ll i=1;
    while(t--)
    {
        
        ll n;cin>>n;
        if(n==1)
        {
            ll x; cin>>x;
            s1.insert({i,x});
            s2.insert({x,-i});
            i++;
        }
        else if(n==3)
        {
            auto it=s2.end();
            it--;
            ll s=((-1)*(it->second));
            cout<<s<<" ";
            s2.erase({it->first,it->second});
            s1.erase({s,it->first});
        }
        else if(n==2)
        {
            auto it=s1.begin();
            cout<<(it->first)<<" ";
            s1.erase({it->first,it->second});
            s2.erase({(it->second),(it->first)*(-1)});
        }

    }
    // for(auto i:s1)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }    
    // cout<<endl;
    // for(auto i:s2)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }    

    return 0;
}