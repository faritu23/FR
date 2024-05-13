#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   09-05-2024
    Time:   11:45:18
    File:   C_Paprika_and_Permutation.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;

        set<int> s;
        for(int i=1;i<=n;i++) s.insert(i);
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            if(s.find(x)!=s.end()) s.erase(x);
            else v.push_back(x);
        }
        sort(v.begin(),v.end());
        bool flag=true;int count=0, i=0;
        for(auto it=s.begin();it!=s.end();it++)
        {
            if(*it>((v[i]-1)/2)){
                flag=false;break;
            }
            else if(v[i]!=*it)
            {
                count++;
            }
            i++;
        }
        if(!flag) cout<<-1<<endl;
        else cout<<count<<endl;
        
    }
    return 0;
}