#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   28-06-2024
    Time:   18:35:00
    File:   D_Ingenuity_2.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++) mp[s[i]]++;
        string v;
        if(n>2 &&mp['N']==mp['S'] && mp['W']==mp['E'] && mp['E']==mp['N'])
        {
            string h;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='W'||s[i]=='E')h+='R';
                else h+='H';
            }
            cout<<h<<endl;
        }
        else if(n>2 && (mp['N']+mp['S'])%2==0 &&(mp['E']+mp['W'])%2==0)
        {
            int n1=(mp['N']+1)/2,s1=(mp['S']+1)/2,e1=(mp['E']+1)/2,w1=(mp['W']+1)/2;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='N'&& n1>0)
                {
                    v+='R'; n1--;
                }
                else if(s[i]=='S'&& s1>0)
                {
                    v+='R';s1--;
                }
                else if(s[i]=='E'&& e1>0)
                {
                    v+='R';e1--;
                }
                else if(s[i]=='W'&& w1>0)
                {
                    v+='R'; w1--;
                }
                else v+='H';
                
            }
            cout<<v<<endl;
        }
        else if(n==2 && mp.size()==1)
        {
            cout<<"RH"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}


