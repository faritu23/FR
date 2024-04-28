#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll x = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>0)
            {
                x+=a[i];
            }
            if(a[i]<0 && x>0)
            {
                ll b=x+a[i];
                if(b>=0)
                {
                    x+=a[i];
                    a[i]-=a[i];
                }
                else
                {
                    a[i]=b;
                    x=0;
                }

            }
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            // cout<<a[i]<<" ";
            if (a[i] < 0)
            {
                sum -= a[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}