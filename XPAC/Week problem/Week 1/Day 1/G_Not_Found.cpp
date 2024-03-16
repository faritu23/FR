#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f[26]={0};
    for(int i=0;i<s.size();i++)
    {
        int c=s[i]-'a';
        f[c]++;
    }
    bool flag=false;
    for(int i=0;i<26;i++)
    {
        if(f[i]==0)
        {
            char c=i+'a';
            cout<<c<<"\n";
            return 0;
        }
        else flag=true;
    }
    if(flag==true)
    {
        cout<<"None";
    }
    return 0;
}