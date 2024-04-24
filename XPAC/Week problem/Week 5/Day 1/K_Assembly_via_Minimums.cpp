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
        int mx=INT_MIN;
        int m = n * (n - 1) / 2, a[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
            mx=max(mx,a[i]);
        }
        sort(a, a + m);
        for (int i = 0; i < m; i += --n)
        {
            cout << a[i] << ' ';
        }
        cout << mx<<endl;
    }
}