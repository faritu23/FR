#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    string target="Timur";
    sort(target.begin(),target.end());
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s; cin>>s;
        sort(s.begin(),s.end());
        if(target==s)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}