#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int> v(n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                count++;
            }
        }
        long long int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] < 0)
            {
                int x = v[i];
                v[i] = (-1) * x;
            }
        }
        sort(v.begin(), v.end());
        if (count % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                sum += v[i];
            }
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                sum += v[i];
            }
            sum -= v[0];
        }
        cout << sum << endl;
    }
    return 0;
}