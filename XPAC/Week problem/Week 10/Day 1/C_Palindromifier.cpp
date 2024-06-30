#include<bits/stdc++.h>
#define ll long long int
#define nn '\n'
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   24-06-2024
    Time:   19:50:19
    File:   C_Palindromifier.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;
    ll n=s.size();
    cout<<3<<nn;
    cout<<"L"<<" "<<n-1<<nn;
    cout<<"R"<<" "<<n-1<<nn;
    cout<<"R"<<" "<<2*n-1<<nn;
    return 0;
}