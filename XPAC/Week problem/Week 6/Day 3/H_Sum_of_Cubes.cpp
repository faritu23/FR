#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int mx=1e4;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> pw;
    for (int i = 1; i <= mx; i++)
    {
        ll a = pow(i, 3);
        pw.push_back(a);
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        bool flag = false;
        for (int i = 0; i <= mx; i++)
        {
            if (pw[i] >= n)
                break;

            ll need = n - pw[i];
            int l = 0, r = mx - 1, mid;
            bool ok=false;

            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (pw[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need)
                {
                    r = mid - 1;
                }
                else 
                {
                    l = mid + 1;
                }
            }
            if(ok) 
            {
                flag=true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
