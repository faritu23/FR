#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int j1,j2,j3,j4,j5; cin>>j1>>j2>>j3>>j4>>j5;
        // cout<<j1<<" "<<j2<<" "<<j3<<" "<<j4<<" "<<j5<<endl
        int count=j1+j2+j3+j4+j5;
        // cout<<count<<endl;
        if(count>=4)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}