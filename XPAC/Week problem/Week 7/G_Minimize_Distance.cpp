#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   09-05-2024
    Time:   22:20:47
    File:   C_Minimize_Distance.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        vector<int>v1,v2;

        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x<0) v2.push_back(-x);
            else v1.push_back(x);
        }

        sort(v2.begin(),v2.end(),greater<int>());
        sort(v1.begin(),v1.end(),greater<int>());
        
        ll sum=0;
        for(int i=0;i<v1.size();i+=k) sum+=v1[i]*2;
        for(int i=0;i<v2.size();i+=k) sum+=v2[i]*2;    
        if(v1.size()>0 && v2.size()>0) sum-=max(v1[0],v2[0]);
        else if(v1.size()>0 && v2.size()==0)sum-=v1[0];
        else if(v1.size()==0 && v2.size()>0)sum-=v2[0];
        cout<<sum<<endl;
    }
    return 0;
}