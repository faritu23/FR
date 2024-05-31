#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   14-05-2024
    Time:   00:14:46
    File:   A_Maximum_GCD.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll g;
        if(n%2==1)
        g=__gcd(n-1,(n-1)/2);
        else
        g=__gcd(n,n/2);
        cout<<g<<endl;

    }
    return 0;
}