#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            
            int b=a[i]-(i+1);
            mx=max(mx,b);
        }
        cout<<mx<<"\n";
    }
    return 0;
}