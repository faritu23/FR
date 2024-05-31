#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   14-05-2024
    Time:   20:18:46
    File:   B_High_School_Become_Human.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    double a,b;cin>>a>>b;
    double c=b*log(a);
    double d=a*log(b);
    if (c==d)cout<<"="<<endl;
    if(c>d) cout<<">"<<endl;
    else if(c<d) cout<<"<"<<endl;
 
    return 0;
}