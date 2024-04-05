#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    map<string ,int>mp;
    vector<string>v;
    string ss;
    while(t--)
    {
        
        string s; cin>>s;
        v.push_back(s);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        string s=v[i];
        mp[s]++;
        if(mp[s]==1)
        {
            int n=s.size()-1;
            int m=s.size()-2;
            ss.push_back(s[m]);
            ss.push_back(s[n]);
        }
    }
    for(int i=0;i<ss.size();i++)
    {
        cout<<ss[i];
    }
    cout<<endl;
    return 0;
}