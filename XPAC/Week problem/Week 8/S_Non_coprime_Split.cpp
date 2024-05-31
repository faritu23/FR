#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll divisor(ll b)
{
    for(int i=2;i*i<=b;i++)
    {
        if(b%i==0)
        {
            return i;
            
        }
    }
    // return v;
}
bool prime(ll a)
{
    if(a==1) return false;
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
/*
    Author: FRK
    Date:   28-05-2024
    Time:   20:06:22
    File:   S_Non_coprime_Split.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        ll a,b; cin>>a>>b;
        if(b<=3)
        {
            cout<<-1<<endl;
        }
        else 
        {
            if(a<b)
            {
                if(b%2==1)
                {
                    b--;
                }
                cout<<2<<" "<<b-2<<endl;
            }
            else if(a==b)
            {
                if(prime(a))
                {
                    cout<<"-1"<<endl;
                }
                else 
                {
                    ll c=divisor(a);
                    {
                        cout<<c<<" "<<a-c<<endl;
                    }
                }
            }
        }
        

    }
    return 0;
}