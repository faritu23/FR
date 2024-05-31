#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   10-05-2024
    Time:   01:07:31
    File:   C_Grandma_Capa_Knits_a_Scarf.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<char> c;
    for(int i=0;i<26;i++)
    {
        char a=i+'a';
        c.push_back(a);
    }
    int t;cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int ans = n + 1;
        for (int i = 0; i < 26; i++) {
            int l = 0, r = n - 1, count = 0;
            while (l <= r) {
                if (s[l] == s[r]) {
                    l++, r--;
                }
                else if (s[l] == c[i]) {
                    count++, l++;
                }
                else if (s[r] == c[i]) {
                    count++, r--;
                }
                else {
                    count = n + 1;
                    break;
                }
            }
            ans = min(ans, count);
        }
        if (ans == n + 1) cout<<-1<<endl;
        else cout << ans << endl;
    }
    
    return 0;
}