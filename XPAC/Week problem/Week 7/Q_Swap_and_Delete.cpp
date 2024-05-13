#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   11-05-2024
    Time:   23:53:41
    File:   Q_Swap_and_Delete.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s;int n=s.size();
        int one=0;int zero=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') zero++;
            else one++;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(zero>0)
                {
                    t.push_back('0');
                    zero--;
                }
                else break;
            }
            else if(s[i]=='0')
            {
                if(one>0)
                {
                    t.push_back('1');
                    one--;
                }
                else break;
            }
        }
        int ans=n-t.size();
        cout<<ans<<endl;
    }
    return 0;
}