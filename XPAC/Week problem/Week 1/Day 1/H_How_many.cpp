#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t;
    cin >> s >> t;
    int count = 0;
    int mx = max(s, t);
    int mn = min(s, t);
    for (int i = 0; i <= mx; i++)
    {
        if (i <= s)
        {
            for (int j = 0; j <= mx; j++)
            {
                if((i+j)<=s)
                {for (int k = 0; k <= mx; k++)
                {
                    if ((i + j + k) <= s && (i * j * k) <= t)
                    {
                        count++;
                    }
                }}
            }
        }
    }
    cout << count << "\n";
    return 0;
}