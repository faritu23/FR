#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   14-05-2024
    Time:   02:01:45
    File:   A_Bachgold_Problem.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        cout<<(n/2)<<endl;
        for(int i=1;i<(n-1)/2 ;i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
    return 0;
}