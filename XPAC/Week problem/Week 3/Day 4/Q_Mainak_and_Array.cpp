#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }


        int sum=v[n-1]-v[0];


        for(int i=1;i<n;i++)
        {
            sum=max(sum,v[i]-v[0]);
        }
        for(int i=0;i<n-1;i++)
        {
            sum=max(sum,v[n-1]-v[i]);
        }
        for(int i=1;i<n;i++)
        {
            sum=max(sum,v[i-1]-v[i]);
        }
        
        cout<<sum<<endl;
    }
    return 0;
}