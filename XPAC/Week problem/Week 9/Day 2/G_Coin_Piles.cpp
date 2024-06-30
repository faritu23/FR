#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   01-06-2024
    Time:   19:46:06
    File:   G_Coin_Piles.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;cin>>t;
    while (t--)
    {
        ll a,b; cin>>a>>b;
        ll sum=(a+b)%3;
        if(sum==0 && max(a,b)<=(2*min(a,b)))
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    
    return 0;
}