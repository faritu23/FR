#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
 
    long long int n;cin>>n;
    long long s; cin>>s;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int l=0,r=0;
    long long sum=0,ans=0;
    while(r<n)
    {
        sum+=a[r];
        while(sum>=s)
        {
            ans+=n-r;
                sum-=a[l];
                l++;
            
            
        }
        // else
        r++; 
    }
    cout<<ans<<endl;
    return 0;
}