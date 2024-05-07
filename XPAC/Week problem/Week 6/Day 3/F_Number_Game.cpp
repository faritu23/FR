#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool ok(multiset<int> s, int n, int mid)
{
    for (int i = 1; i <= mid; i++)
    {
        if (s.empty())
            return false;
        ll k = mid - i + 1;
        auto it = s.upper_bound(k);
        if (it == s.begin())
            return false;
        it--;

        s.erase(it);

        if (!s.empty())
        {
            it = s.begin();
            ll v = *it;
            v += k;
            s.erase(it);
            s.insert(v);
        }
    }
    return true;
}
int main()
{
    /*
        Author: FRK
        Date:   04-05-2024
        Time:   03:56:48
        File:   C_Number_Game.cpp
    */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }

        // auto ok = [&](ll mid)
        // {
        //     for (int i = 1; i <= mid; i++)
        //     {
        //         if (s.empty())
        //             return false;
        //         ll k = mid - i + 1;
        //         auto it = s.upper_bound(k);
        //         if (it == s.begin())
        //             return false;
        //         it--;

        //         s.erase(it);

        //         if (!s.empty())
        //         {
        //             it = s.begin();
        //             ll v = *it;
        //             v += k;
        //             s.erase(it);
        //             s.insert(v);
        //         }
        //     }
        //     return true;
        // };

        // binary search
        ll l = 0, r = n, mid, ans;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(s,n,mid))
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
    }
    return 0;
}