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
        int n,XOR=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            XOR^=a[i];

        }
        int ans=XOR;
        for (int i = 0; i < n; i++)
        {
            ans=min(ans,XOR^a[i]);
        }
        cout<<ans<<endl;
        
    }

    return 0;
}