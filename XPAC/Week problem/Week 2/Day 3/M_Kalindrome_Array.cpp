#include <bits/stdc++.h>
using namespace std;
bool K_D(vector<int> v)
{
    int j = v.size() - 1;
    bool flag = true;
    for (int i = 0; i <= j; i++)
    {
        if (v[i] != v[j])
        {
            flag = false;
            break;
        }
        j--;
    }
    return flag;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v1;
        vector<int> v2;
        int g, h, j = n - 1;
        bool flag = true;
        for (int i = 0; i < j; i++)
        {
            if (a[i] != a[j])
            {
                flag = false;
                g = a[i];
                h = a[j];
                break;
            }
            j--;
        }
        if (!flag)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != g)
                {
                    v1.push_back(a[i]);
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (a[i] != h)
                {
                    v2.push_back(a[i]);
                }
            }

            if (K_D(v1) || K_D(v2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}