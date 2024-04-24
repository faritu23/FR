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
        string s;
        cin >> s;
        int n=s.size();
        char a = s[0];
        char b = s[n - 1];

        char a1 = min(a, b);
        char b1 = max(a, b);
        // cout<<a1<<" "<<b1;
        vector<pair<char, int>> order;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= a1 && s[i] <= b1)
            {
                order.push_back({s[i], i});
            }
        }
        sort(order.begin(), order.end(), [&](pair<char, int> a, pair<char, int> b)
             { return a.second < b.second; });
        if (order.size() > 2)
        {
            sort(order.begin() + 1, order.begin() + order.size() - 1, [&](pair<char, int> a, pair<char, int> b)
                 {
                if(s[0]>s[n-1]){
                    return a.first>b.first;
                }
                return a.first<b.first; });
        }
        // for(auto i: order)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }


        ll cost=0;
        vector<int> v;
        v.push_back(1);
        for(int i=1;i<order.size();i++)
        {
            cost+=abs(order[i-1].first - order[i].first);
            v.push_back(order[i].second +1);
        }
        cout<<cost<<" "<<v.size()<<endl;
        for(int i:v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}