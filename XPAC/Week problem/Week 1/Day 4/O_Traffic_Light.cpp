#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        char c;cin>>c;
        string s; cin>>s;
        vector<char> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(s[i]);
        }
        for(int i=0;i<n;i++)
        {
            v.push_back(s[i]);
        }
        int mx=INT_MIN;
        int count=0;
        int flag=1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==c && flag==1)
            {
                flag=0;
                count=0;
            }
            if(flag==0)
            {
                count++;
            }
            if(v[i]=='g')
            {
                mx=max(mx,count);
                flag=1;
            }
        }
        cout<<mx-1<<endl;
    }
    return 0;
}