
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        string a,b; cin>>a>>b;
        int a1=a.size();
        int b1=b.size();
        int mn=min(a.size(),b.size());
        int ans = 0;
    for (int mn = 1; mn <= min(a1,b1); mn++) {
        for (int i = 0; i + mn <= a1; i++) {
            for (int j = 0; j + mn <= b1; j++) {
                    // cout<<a.substr(i, mn)<<" "<<b.substr(j, mn)<<endl;
                if (a.substr(i, mn) == b.substr(j, mn)) {
                    ans = max(ans, mn);
                }
            }
        }
    }
    cout << a1 + b1 - 2 * ans << "\n";
    }
    return 0;
}