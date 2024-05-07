#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, t;
    cin >> n >> t;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    auto ok = [&](ll m)
    {
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            total += (m / a[i]);
            if (total >= t)
            {
                return true;
            }
        }
        return false;
    };
 
    ll l = 0, r = 1e18, mid, an;
    while (l <= r)
    {
        mid = (l + r)/ 2;
        if (ok(mid))
        {
            an = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << an << endl;
 
    return 0;
}