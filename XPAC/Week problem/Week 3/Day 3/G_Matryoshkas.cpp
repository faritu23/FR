// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         ll n;
//         cin >> n;
//         vector<ll>v(n);
//         map<ll, ll>mp;
//         for(ll i = 0; i < n; i++)
//         {
//             cin >> v[i];
//             mp[v[i]]++;
//         }
//         set <ll>s;
//         for(ll i = 0; i < n; i++)
//         {
            
//            s.insert(v[i]);
//            s.insert(v[i] + 1);
//         }
//         int a = 0;
//         ll ans = 0;
//         for(ll x : s)
//         {
//             int b = mp[x];
//             ans += max(0, b - a);
//             a = b;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll>v(n);
        map<ll, ll>mp;
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            int val=v[i];
            if(mp[val]!=0)
            {
                ans++;
                while(mp[val]>0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}