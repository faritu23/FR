#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int t1; cin>>t1;
    while(t1--)
    {
        long long int n,k,t;
        cin>>n>>k>>t;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long int r=0,l=0,ans=0,count=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<=t)
            {
                count++;
                if(i==(n-1) || v[i+1]>t)
                {
                    if(count>=k)
                    {
                        long long int a=count-k+1;
                        ans+=(a*(a+1))/2;
                    }
                    count=0;
                }
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}