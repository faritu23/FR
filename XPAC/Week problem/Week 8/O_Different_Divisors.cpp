#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool divisor(ll n)
{
    if(n==1) return false;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    } 
    return true;
}
int main()
{
/*
    Author: FRK
    Date:   16-05-2024
    Time:   17:14:27
    File:   B_Different_Divisors.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int d;cin>>d;
        
        ll ans=1;
        ll i=d+1;
        while(true)
        {
            
            if(divisor(i))
            {
                ans*=i;
                break;
            }
            i++;
        }
        ll j=d+ans;
        while(true)
        {
            if(divisor(j))
            {
                ans*=j;
                break;
            }
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}