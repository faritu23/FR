#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> vv[1006];
void pp()
{
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=1000;j++)
        {
            if(__gcd(i,j)==1)
            {
                vv[i].push_back(j);
            }
        }
    }
}
int main()
{
/*
    Author: FRK
    Date:   18-05-2024
    Time:   12:23:40
    File:   D_Coprime.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    pp();
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> indx[1001];
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            indx[v[i]].push_back(i+1);
        }
        int mx=-1;
        for(int i=1;i<=1001;i++)
        {
            for(int j:vv[i])
            {
                if(!indx[i].empty() && !indx[j].empty())
                {
                    mx=max(mx,indx[i].back()+indx[j].back());
                }
            }
        }
        cout<<mx<<endl;
    }
    
    return 0;
}