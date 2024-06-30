#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
/*
    Author: FRK
    Date:   18-05-2024
    Time:   22:17:55
    File:   Palindrome_Reorder.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;
    int n=s.size();
    int f[26]={0};
    for(int i=0;i<n;i++)
    {
        int a=s[i]-'A';
        f[a]++;
    }

    bool valid=false;
    int c=0;
    for(int i=0;i<=26;i++)
    {
        if(f[i]!=0 && f[i]%2==1)
        {
            c++;
        }
    }
    if(c==1 && n%2==1) valid= true;
    if(c==0 && n%2==0) valid= true;
    if(valid)
    {
        list<char> v; 
        if(n%2==1)
        {
            for(int i=0;i<26;i++)
            {
                if(f[i]!=0 && f[i]%2==1)
                {
                    for(int j=0;j<f[i];j++)
                    {
                        // cout<<f[i]<<endl;
                        char a=i+'A';
                        v.push_back(a);
                    }
                    f[i]=0;
                }
            }
            for(int i=0;i<26;i++)
            {
                if(f[i]!=0)
                {
                    while(true)
                    {
                        char a=i+'A';
                        v.push_back(a);
                        v.push_front(a);
                        f[i]-=2;
                        if(f[i]<=0) break;
                    }
                }
            }
        }
        if(n%2==0)
        {
            for(int i=0;i<26;i++)
            {
                if(f[i]!=0)
                {
                    while(true)
                    {
                        char a=i+'A';
                        v.push_back(a);
                        v.push_front(a);
                        f[i]-=2;
                        if(f[i]<=0) break;
                    }
                }
            }
        }


            for(auto i:v)
            {
                cout<<i;
            }
    }
    else
    {
        cout<< "NO SOLUTION"<<endl;
    }

    return 0;
}