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
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<long long> v1(n,0);
            long long sum = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'L')
                {
                    long long int a = i;
                    long long int b = n - i - 1;

                    sum+=i;
                    if (b > a)
                    {
                        v1.push_back(b-a);
                    }
                    
                }
                if (s[i] == 'R')
                {
                    long long int a = i;
                    long long int b = n - i - 1;
                    sum+=b;
                    if (b < a)
                    {
                        v1.push_back(a-b);
                    }
                }
            }
            sort(v1.begin(), v1.end());
            reverse(v1.begin(), v1.end());
            for(int i=0;i<n;i++)
            {
                sum+=v1[i];
                cout<<sum<<" ";
            }
            
            
            cout << endl;
        }
    }
    return 0;
}