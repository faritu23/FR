#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   02-06-2024
    Time:   17:06:03
    File:   Number_Spiral.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--)
    {
        ll x,y;cin>>x>>y;
        if(y>x)
        {
            ll a=(y-1)*(y-1);
            ll add=x;
            if(y%2!=0)
            {
                add=((2*y )-x);
            }
            cout<<add+a<<endl;
        }
        else
        {
            ll a=(x-1)*(x-1);
            ll add=y;
            if(x%2==0)
            {
                add=((2*x) -y);
            }
            cout<<a+add<<endl;
        }
    }
    return 0;
}