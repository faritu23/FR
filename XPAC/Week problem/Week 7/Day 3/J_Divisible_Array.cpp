#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   09-05-2024
    Time:   19:39:38
    File:   A_Divisible_Array.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n%2==1)
        {
            ll sum=0;
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=2;i<=n*2;i+=2)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}