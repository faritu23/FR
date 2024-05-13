#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   07-05-2024
    Time:   20:44:41
    File:   String_Game.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        bool flag=false;
        
        int count0=0,count1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') count1++;
            else count0++;
        }
        int count=min(count1,count0);
        if(count%2==0 ) cout<<"Ramos"<<endl;
        else cout<<"Zlatan"<<endl;
    }
    return 0;
}