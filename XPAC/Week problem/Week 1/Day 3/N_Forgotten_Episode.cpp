#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    int n; cin>>n;
    int v[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>v[i];
    }
    int f[100001]={0};
    for(int i=0;i<n-1;i++)
    {
        int m=v[i];
        f[m]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(f[i]==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}