#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        int count=0;
        for(int i=0;i<n;i++)
        {
            count|=v[i];
        }
        cout<<count<<endl;
    }
    return 0;
}