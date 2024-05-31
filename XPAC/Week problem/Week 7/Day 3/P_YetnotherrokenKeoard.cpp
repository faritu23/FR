#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   11-05-2024
    Time:   23:30:07
    File:   B_YetnotherrokenKeoard.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int n=s.size();
        map<int,char>mp;
        for(int i=0;i<n;i++)
        {
            mp.insert({i,s[i]});
        }
        
        stack<pair<char,int>> l;
        stack<pair<char,int>> b;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                if(!b.empty())
                {
                    pair<char,int> a=b.top();
                    b.pop();
                    mp[a.second]='?';
                }
                mp[i]='?';
            }
            if(s[i]=='b')
            {
                if(!l.empty())
                {
                    pair<char,int> a=l.top();
                    l.pop();
                    mp[a.second]='?';
                }
                mp[i]='?';
            }
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B')
            {
                b.push({s[i],i});
            }
            if(s[i]>='a' && s[i]<='z' && s[i]!='b')
            {
                l.push({s[i],i});
            }
        }
        for(auto i:mp)
        {
            if(i.second!='?')
            {
                cout<<i.second;
            }
        }
        cout<<endl;
    }
    return 0;
}