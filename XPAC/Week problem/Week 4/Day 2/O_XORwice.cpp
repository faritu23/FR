#include<bits/stdc++.h>
using namespace std;

int aa(int a, int b)
{
    // int mn=INT_MAX;
    // for(int i=0;i<=b;i++)
    // {
    //     long long int c=(a^i)+(b^i);
    //     mn=min(mn,c);
    // }
    // cout<<mn<<endl;
    cout<<(a^b)<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        aa(a,b);

    }
    return 0;
}