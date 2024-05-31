#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool Prime(ll n)
{
    if(n==1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
/*
    Author: FRK
    Date:   14-05-2024
    Time:   12:42:59
    File:   D_Taxes.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;
    if(Prime(n))
    {
        cout<<1<<endl;
    }
    else if(n%2==0)
    {
        cout<<2<<endl;
    }
    else
    {
        if(Prime(n-2))
        {
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
    return 0;
}