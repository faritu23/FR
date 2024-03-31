#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n - 1];
        map<int, int> mp;
        map<int, int> mp1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {

                if (j == n - 2)
                {
                    mp[a[i][j]]++;
                }
            }
        }
        for (auto it : mp)
        {
            mp1.insert({it.second, it.first});
        }
        auto it1 = *mp1.crbegin();
        for (int i = 0; i < n; i++)
        {
            bool flag = true;
            for (int j = 0; j < n - 1; j++)
            {
                if (a[i][j] == it1.second)
                {
                    flag = false;
                }
                v.push_back(a[i][j]);
            }
            if (!flag)
            {
                v.clear();
            }
            else
            {
                break;
            }
        }
        for (int b : v)
        {
            cout << b << " ";
        }
        cout << it1.second << endl;
    }

    return 0;
}