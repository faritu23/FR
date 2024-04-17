#include<bits/stdc++.h>
using namespace std;

const int m=1<<8;

void aaa(int a[],int n)
{
    bool flag=false;
    for(int i=0;i<=m;i++)
    {
    long long int x=0;
        for(int j=0;j<n;j++)
        {
            x=(i^(a[j]))^x;
        }
        if(x==0)
        {
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t ; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        aaa(a,n);
    }
    return 0;
}