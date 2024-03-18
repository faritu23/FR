
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a[3][n];
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                mp[a[i][j]]++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            int ans = 0;
            for (int j = 0; j < n; j++)
            {
                if (mp[a[i][j]] == 1)
                {
                    ans += 3;
                }
                if (mp[a[i][j]] == 2)
                {
                    ans++;
                }
            }
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}