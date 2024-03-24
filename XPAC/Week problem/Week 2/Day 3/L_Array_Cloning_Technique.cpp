#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        int mx=INT_MIN;
        for(auto k:mp)
        {
            if(k.second> mx)
            {
                mx=max(k.second,mx);
            }
        }
        int c=n-mx;
        int count = 0;
        while (mx != n)
        {
            count++;
            if (mx * 2 >= n)
            {
                break;
            }
            mx=mx*2;
        }
        int ans=c+count;
        cout<<ans<<endl;

    }
    return 0;
}