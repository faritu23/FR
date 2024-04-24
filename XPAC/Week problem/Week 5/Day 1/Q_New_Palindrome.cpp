#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int n=s.size();
        int f[26]={0};
        for(int i=0;i<n;i++)
        {
            int a=s[i]-'a';
            f[a]++;
        }
        bool flag=true,flag1=false;
        int count=0;
        for(int i=0;i<26;i++)
        {
            if(f[i]>0)
            {
                count++;
            }
            if(f[i]%2==1)
            {
                flag=false;
                if(f[i]>2)
                {
                    flag1=true;
                }
            }
            
        }
        if(flag)
        {
            if(count>=2)
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
            if((count-1)>=2 ||((count)>=2  && flag1))
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