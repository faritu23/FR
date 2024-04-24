#include <bits/stdc++.h>
#define ll long long int
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int I, J, K;
        bool flag = false;
        for (int i = 1; i < n - 1; i++)
        {

            if (v[i - 1] < v[i] && v[i] > v[i + 1])
            {
                flag = true;
                I = i -1;
                J = i;
                K = i+1 ;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
            cout << I +1<< " " << J+1 << " " << K+1 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}