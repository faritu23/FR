#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   28-06-2024
    Time:   12:02:09
    File:   B_Interesting_Subarray.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(int i=0;i<n;i++) 
        {
            cin>>v[i];
            mn=min(mn,v[i]);
            mx=max(mx,v[i]);
        }
        bool f=false;
        for(int i=0;i<n-1;i++)
        {
            if(abs(v[i]-v[i+1])>=2)
            {
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<endl;
                f=true;
                break;
            }
        }
        if(!f)cout<<"NO"<<endl;
        
    }
    return 0;
}