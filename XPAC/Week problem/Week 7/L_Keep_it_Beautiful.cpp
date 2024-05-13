#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   11-05-2024
    Time:   12:48:03
    File:   B_Keep_it_Beautiful.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string s;
        s.push_back('1');
        int f=v[0],k=v[0];
        bool flag=true;
        for(int i=1;i<n;i++)
        {
            if(v[i]>=k && flag)
            {
                s.push_back('1');
                k=v[i];
            }
            else if(f>=v[i] && flag)
            {
                s.push_back('1');
                flag=false;
                k=v[i];
            }
            else if(k<=v[i] && f>=v[i])
            {
                s.push_back('1');
                k=v[i];
            }
            else {
                s.push_back('0');
            }
        }
        cout<<s<<endl;
    }
    return 0;
}