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


        int l=0,r=n-1,ans=-1;
        for(int i=0;i<n;i++)
        {
            ans&=(a[l]&a[r]);
            r--; l++;
        }
        cout<<ans<<endl;

    }
    return 0;
}