#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll count(vector<int> v,int n)
{

    ll ans=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            c++;
        }
        else
        {
            ans+=c;
        }
    }
    return ans;

}
int main()
{
/*
    Author: FRK
    Date:   11-05-2024
    Time:   21:24:27
    File:   E_Binary_Inversions.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        vector<int> one,zero;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0) zero.push_back(0);
            if(v[i]==1) one.push_back(1);
            
        }

        int i0=-1,i1=-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                i0=i;break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]==1)
            {
                i1=i;break;
            }
        }
        ll ans=count(v,n);
        if(i0!=-1)
        {
            v[i0]=1;
            ans=max(ans,count(v,n));
            v[i0]=0;

        }
        if(i1!=-1)
        {
            v[i1]=0;
            ans=max(ans,count(v,n));  
        }
        
        cout<<ans<<endl;
        
    }
    return 0;
}