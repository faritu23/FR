#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   18-05-2024
    Time:   17:23:05
    File:   Permutations.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    ll n; cin>>n;
    if(n<=3 && n!=1)
    {
            cout<<"NO SOLUTION"<<endl;
    }
    else
    {    for(int i=n;i>=1;i--)
        {
            if(i%2==1)
            cout<<i<<" ";
        }
        for(int i=n;i>=1;i--)
        {
            if(i%2==0)
            cout<<i<<" ";
        }       
    }
    return 0;
}