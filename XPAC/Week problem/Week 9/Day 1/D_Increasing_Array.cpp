#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   01-06-2024
    Time:   18:41:53
    File:   D_Increasing_Array.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>v[i+1])
        {
            cnt+=(v[i]-v[i+1]);
            v[i+1]=v[i];
        }
    }
    cout<<cnt<<endl;

    return 0;
}