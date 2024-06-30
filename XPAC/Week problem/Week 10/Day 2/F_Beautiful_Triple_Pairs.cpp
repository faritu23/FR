#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   28-06-2024
    Time:   12:48:54
    File:   C_Beautiful_Triple_Pairs.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ll ans=0;
        map<tuple<int,int,int>,int> count;
        for(int i=0;i<n-2;i++)
        {
            // vector<tuple<int,int,int>> mp(3);
            vector<tuple<int,int,int>> mp;
            tuple<int,int,int> triplet=make_tuple(v[i],v[i+1],v[i+2]);
            // triplet({v[i],v[i+1],v[i+2]});
            // mp[0]=make_tuple(0,v[i+1],v[i+2]);
            // mp[1]=make_tuple(v[i],0,v[i+2]);
            // mp[2]=make_tuple(v[i],v[i+1],0);
            mp.push_back({0,v[i+1],v[i+2]});
            mp.push_back({v[i],0,v[i+2]});
            mp.push_back({v[i],v[i+1],0});
            tuple<int,int,int> a=mp[0];
            for(auto j:mp)
            {
                // int x1=get<0>(j);
                // int x2=get<1>(j);
                // int x3=get<2>(j);
                // cout<<x1<<" "<<x2<<" "<<x3<<endl;
                // cout<<
                ans+=count[j]-count[triplet];
                // cout<<ans<<endl;
                count[j]++;
            }
            count[triplet]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}