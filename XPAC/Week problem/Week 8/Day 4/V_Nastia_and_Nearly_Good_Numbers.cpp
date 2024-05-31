#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   18-05-2024
    Time:   12:04:29
    File:   A_Nastia_and_Nearly_Good_Numbers.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<(a)<< " "<<(b*a)<<" "<<(a*(b+1))<<endl;
        }
    }
    return 0;
}