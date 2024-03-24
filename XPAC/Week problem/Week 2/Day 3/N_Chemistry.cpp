#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string  s; cin>>s;
        int f[26]={0};
        for(int i=0;i<n;i++)
        {
            int a=s[i]-'a';
            f[a]++;
        }
        int count=0;
        for(int i=0;i<26;i++)
        {
            if(f[i]%2==1)
            {
                count++;
            }
        }
        if(count>k)
        {
            int b=count-k;
            if(b==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}