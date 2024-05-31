#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   09-05-2024
    Time:   12:29:40
    File:   C_Two_Arrays.cpp
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
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if((v2[i]-v1[i])>1 || v1[i]>v2[i]) flag=false;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}