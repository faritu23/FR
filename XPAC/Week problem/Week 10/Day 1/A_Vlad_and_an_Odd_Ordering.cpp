#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solution()
{

    int n,k; cin>>n>>k;
    vector<int>v;
    while(n>0)
    {
        int a=(n+1)/2;
        v.push_back(a);
        n/=2;
    }
    int power=1,extra=0;
    for(int i:v)
    {
        if(extra<k && k<=extra+i)
        {
            ll a=((2*(k-extra)) -1 )*power;
            cout<<a<<endl;
            return;
        }
        extra+=i;
        power*=2;
    }
}
int main()
{
/*
    Author: FRK
    Date:   24-06-2024
    Time:   01:18:16
    File:   E_Vlad_and_an_Odd_Ordering.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) solution();
    return 0;
}