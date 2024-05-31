
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   28-05-2024
    Time:   12:33:16
    File:   R_Chef_and_Prime_Divisors.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
        bool f=true;
        while(__gcd(a,b)>1)
        {
            b/=__gcd(a,b);
            // cout<<b<<" ";
        }
        if(b==1)
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;

    }
    return 0;
}