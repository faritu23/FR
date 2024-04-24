#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1)
        {
            cout<<a<<endl;
        }
        else
        {
            int x=abs(b-c)+(c-1);
            int ax=(a-1);
           
            if(ax<x)
            cout<<1<<endl;
            else if(x<ax)
            cout<<2<<endl;
            else
            cout<<3<<endl;
        }

    }
    return 0;
}