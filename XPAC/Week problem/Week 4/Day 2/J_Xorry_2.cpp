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
        int m=n;
        int count=0,ans,sum=0;
        while (m)
        {
            if((m&1)==0)
            {
                count++;
                sum++;
            }
            else if((m&1==1))
            {
                ans=sum;
                sum=0;
            }
            m>>=1;
        }
        // cout<<count<<" "<<ans<<endl;
        int p=pow(2,(count-ans));
        cout<<p<<endl;
        
    }
    return 0;
}