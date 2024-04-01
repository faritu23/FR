#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<string> s(n);
        map<string, int> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]]++;
        }
        
        string v;
        for (int i = 0; i < n; i++)
        {
            bool flag=false;
            for (ll j = 0; j < s[i].size(); j++)
            {
                string s1 = s[i].substr(0, j);
                string s2 = s[i].substr(j, s[i].size() - 1);
                
                if (mp.count(s1) && mp.count(s2))
                {
                    flag=true;                
                }
                
            }
            if(flag)
            {
                v.push_back('1');
                flag=false;
            }
            else
            {
                v.push_back('0');
            }
        }
        
        cout << v<<endl;
    }
    return 0;
}