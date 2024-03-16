#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,T;
    cin>>t>>a>>T;
    if(t<=T)
    {
        int b=T/t;
        int ans=b*a;
        cout<<ans<<"\n";
    }
    else
    {
        cout<<0<<"\n";
    }
    return 0;
}