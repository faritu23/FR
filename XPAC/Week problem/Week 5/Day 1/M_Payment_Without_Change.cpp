#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, s;
        cin >> a >> b >> n >> s;

        int a1 = s / n;

        if (a >= a1)
        {
            
            ll ans = (n * a1);
            int b1 = s - ans;
            if (b1 <= b)
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
            ll ans = a * n;

            int b1 = s - ans;
            if (b1 <= b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}