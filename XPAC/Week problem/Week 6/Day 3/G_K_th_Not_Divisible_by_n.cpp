#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        ll n,index;cin>>n>>index;
        ll b=((index-1)/(n-1));
        cout<<index+b<<endl;
        
    }
    
    return 0;
}