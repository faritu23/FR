#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, t;
        cin >> n >> m >> t;
        vector<long long int> capacity(n);
        vector<long long int> power(m);
        for (int i = 0; i < n; i++)
        {
            cin >> capacity[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> power[i];
        }
        int N = min(n, m);
        sort(capacity.begin(), capacity.end());
        reverse(capacity.begin(), capacity.end());
        sort(power.begin(), power.end());
        reverse(power.begin(), power.end());
        long long ans = 0;
        for (int i = 0; i < N; i++)
        {

            long long a = power[i] * t;
            long long int mn = min(a, capacity[i]);
            ans += mn;
        }
        cout << ans << endl;
    }
    return 0;
}