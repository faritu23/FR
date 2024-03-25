#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s1;
        cin>>s1;
        stack<char> s;
        for(int i=0;i<n;i++)
        {
            if(!s.empty() && s.top()=='('&& s1[i]==')')
            {
                s.pop();
            }
            else
            {
                s.push(s1[i]);
            }
        }
        int c=s.size();
        int ans=c/2;
        cout<<ans<<'\n';
    }
    return 0;
}