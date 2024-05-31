#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   07-05-2024
    Time:   21:54:09
    File:   C_Array_Decrements.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v1(n);
        vector<int>v2(n);

        for(int i=0;i<n;i++) cin>>v1[i];
        for(int i=0;i<n;i++) cin>>v2[i];

        int mx=INT_MIN;

        for(int i=0;i<n;i++)
        {
            if(v2[i]==0)
            {
                int a=abs(v1[i]-v2[i]);
                mx=max(a,mx);
            }
        }

        set<int> s;
        bool flag=true;
        int aa;
        for(int i=0;i<n;i++)
        {
            if(v2[i]>0)
            {
                aa=v1[i]-v2[i];
                s.insert(aa);
            }
            if(v2[i]>v1[i]) flag=false;
        }

        auto it=s.begin();
        if( (s.empty()&& flag)||(s.size()<=1 && flag && mx<=*it))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }       
    }
    
    return 0;
}