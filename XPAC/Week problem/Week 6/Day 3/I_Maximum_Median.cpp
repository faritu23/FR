#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    
    sort(a.begin(),a.end());
    auto ok=[&](ll mid)
    {
        ll total=0;
        for(int i=n/2;i<n;i++)
        {
            total+=(a[i]<mid ? (mid -a[i]):0);
        }
        return total<=k;
    };
    
    ll l=1,r=2e9,mid,ans;
    while (l <= r)
    {
        mid = (l + r)/ 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}