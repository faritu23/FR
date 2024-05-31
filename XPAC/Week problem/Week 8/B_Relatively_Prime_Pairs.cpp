#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   14-05-2024
    Time:   16:16:13
    File:   B_Relatively_Prime_Pairs.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll l,r; cin>>l>>r;
    cout<<"YES"<<endl;
    for(ll i=l;i<=r;i+=2)
    {
        cout<<i<<" "<<i+1<<endl;
    }
    return 0;
}