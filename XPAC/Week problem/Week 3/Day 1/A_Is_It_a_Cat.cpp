#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
        int n;string s;
        cin>>n>>s;
        string m="meow";
        list<char> l;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='m' || s[i]=='M'|| s[i]=='E'|| s[i]=='e' || s[i]=='O'|| s[i]=='o'||s[i]=='W'|| s[i]=='w')
            {
                if(s[i]>'a' && s[i]<'z')
                {
                    l.push_back(s[i]);
                }
                else
                {
                    
                    char c=s[i]+32;
                    l.push_back(c);
                }
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(!flag)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            string s1;
            l.unique();
            for(auto it:l)
            {
                // cout<<it<<endl;
                s1.push_back(it);
            }
            if(m==s1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}