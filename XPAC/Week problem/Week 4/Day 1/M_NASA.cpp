#include<bits/stdc++.h>
using namespace std;
const int m=1<<15;
vector<int> palindrom;

void palindrome()
{
    for(int i=0;i<m;i++)
    {
        string s=to_string(i);
        int len=s.size();
        bool flag=true;
        for(int j=0;j<len/2;j++)
        {
            if(s[j]!=s[len-j-1])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            palindrom.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    palindrome();
    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> cnt(m),a;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            cnt[x]++;
            a.push_back(x);
        }

        long long ans=n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<palindrom.size();j++)
            {
                int c=(a[i]^palindrom[j]);
                ans+=cnt[c];
            }
        }
        cout<<ans/2<<endl;
    }
    
    return 0;
}