#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll INF=1e9+7;
int main()
{
/*
    Author: FRK
    Date:   10-05-2024
    Time:   13:35:06
    File:   B_Special_Numbers.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll p = 1;
        ll ans = 0;
        for(int j=0;j<31;j++){
            if(k & (1<<j)){
                ans = (ans + p) % INF;                
            }
            p *= n;
            p %= INF;
            
        }
        cout<<ans<<"\n";
    }
    return 0;
}