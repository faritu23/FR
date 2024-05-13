#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   12-05-2024
    Time:   17:35:57
    File:   D_Rudolf_and_the_Ball_Game.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        set<int>s;
        s.insert(x);
        while(m--)
        {
            int time;char symbol;cin>>time>>symbol;
            set<int>tmp;
            if(symbol=='0' || symbol=='?')
            {
                for(int i:s)
                {
                    int a=time+i;
                    if(a%n==0) tmp.insert(n);
                    else tmp.insert(a%n);
                }
            }
            if(symbol=='1' || symbol=='?')
            {
                for(int i:s)
                {
                    int a=i-time+n;
                    if(a%n==0) tmp.insert(n);
                    else tmp.insert(a%n);
                }
            }
            s=tmp;
            
        }
        cout<<s.size()<<endl;
        for(auto i:s)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}