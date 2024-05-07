#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   07-05-2024
    Time:   19:50:59
    File:   B_Two_Cakes.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b; cin>>n>>a>>b;
    int mn=0;
    for(int i=1;i<n;i++)
    {
        int x=min((a/i),(b/(n-i)));
        mn=max(x,mn);
    }
    cout<<mn<<endl;
    return 0;
}