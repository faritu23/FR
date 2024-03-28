#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long int n;cin>>n;
    long long k; cin>>k;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long  l=0,r=0;
    long long ans=0;
    multiset<long long int>ms;
    while(r<n)
    {
        ms.insert(a[r]);
        long long int mn,mx;
        mx=*ms.rbegin();
        mn=*ms.begin();
        if((mx-mn)<=k)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(l<r)
            {
                mx=*ms.rbegin();
                mn=*ms.begin();
                if((mx-mn)<=k)
                {
                    break;
                } 
                auto it=ms.find(a[l]);
                ms.erase(it);
                l++;
            }
            mx=*ms.rbegin();
            mn=*ms.begin();
            if((mx-mn)<=k)
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }
    
    cout<<ans<<endl;
    return 0;
}