
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   15-05-2024
    Time:   12:51:36
    File:   I_Di_visible_Confusion.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        bool flag1=true;
        
        for(int i=0;i<n;i++)
        {
            bool flag=true;
            for(int j=2;j<=i+2;j++)
            {
                if(v[i]%j!=0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                flag1=false;
                break;
            }
        }
        if(flag1)
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