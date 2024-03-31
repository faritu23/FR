#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;cin>>n>>x;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long preSum[n];
        preSum[0]=a[0];
        for(int i=1;i<n;i++)
        {
            preSum[i]=a[i]+preSum[i-1];
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<preSum[i]<<endl;
        // }
        while(x--)
        {
            long long int l,r,k;
             cin>>l>>r>>k;
            if(l==1)
            {
                long long b=(preSum[n-1]-preSum[r-1])+((r-l)+1)*k;
                if(b%2==1)
                {
                    cout<<"YES"<<'\n';
                }
                else
                {
                    cout<<"NO"<<'\n';
                }
            }
            else
            {
                long long b=(preSum[n-1]-(preSum[r-1]-preSum[l-2]))+((r-l)+1)*k;
                // cout<<b<<endl;
                if(b%2==1)
                {
                    cout<<"YES"<<'\n';
                }
                else
                {
                    cout<<"NO"<<'\n';
                }
            }
        }
    }
    return 0;
}