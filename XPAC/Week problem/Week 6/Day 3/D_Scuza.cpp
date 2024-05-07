#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n,m;cin>>n>>m;
        vector<ll> v1(n+1,0);
        for(int i=1;i<=n;i++) cin>>v1[i];
        vector<ll> pre_sum(n+2,0);
        for(int i=1;i<=n;i++) pre_sum[i]=v1[i]+pre_sum[i-1];//prefix sum

        vector<pair<ll,int>> v2(m);//pair
        for(int i=0;i<m;i++)
        {
            cin>>v2[i].first;
            v2[i].second=i;
        }
        sort(v2.begin(),v2.end());

        vector<ll> ans(m);
        int j=0;
        for(int i=0;i<m;i++)
        {
            while(true)
            {
                if(j==n || v1[j+1]>v2[i].first) break;
                j++;
            }
            ans[v2[i].second]=pre_sum[j];
        }
        for(int i=0;i<m;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}