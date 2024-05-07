#include <bits/stdc++.h>
using namespace std;
bool ok(long long mid, vector<int> a, int n, int k)
{
    long long cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]< mid)
        {
            cnt+=mid-a[i];
        }
    }
    return cnt <= k;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long l = 1, r = 2e9, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid,a,n,k))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}