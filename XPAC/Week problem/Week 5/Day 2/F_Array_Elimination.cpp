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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            for (int k = 0; k < 30; k++)
            {
                if ((a[i] >> k) & 1)
                {
                    s += '1';
                }
                else
                    s += '0';
            }
            v.push_back(s);
        }
        int mx=INT_MIN;
        vector<int> v1;

        for (int j = 0; j < 30; j++)
        {
            int sum = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i][j] == '1')
                    sum += 1;
            }
            v1.push_back(sum);
        }
        vector<int> b;
        for (int k = 1; k <= n; k++)
        {
            bool flag = true;
            for (int i = 0; i < v1.size(); i++)
            {

                if (v1[i] % k != 0)
                {
                    flag = false;
                }
            }
            if(flag)
            {
                b.push_back(k);
            }
        }
        for(int i=0;i<b.size();i++)
        {
            cout<<b[i]<<" ";

        }
        cout<<endl;
    }
    return 0;
}