#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v1(n);
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
            mp[v1[i]].push_back(i);
            
            
        }
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            if(mp[a].empty() || mp[b].empty())
            {
                cout<<"NO"<<endl;
                continue;
            }
            if(mp[a][0]<mp[b].back())
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}