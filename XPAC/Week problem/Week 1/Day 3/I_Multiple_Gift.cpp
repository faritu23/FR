#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int count=0;
    long long h=n;
    for(long long int i=1;i<=m;i++)
    {
        if(h <= m)
        {
            count++;
        }
        else break;
        h=h*2;
    }
    cout<<count;
    return 0;
}