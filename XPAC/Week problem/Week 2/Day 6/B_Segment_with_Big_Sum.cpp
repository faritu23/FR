#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
 
    int n;cin>>n;
    long long s; cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=0;
    long long sum=0;
    int lenth=INT_MAX;
    while(r<n)
    {
        sum+=a[r];
        if(sum>=s)
        {
            lenth=min(lenth,r-l+1);
            while(sum>s)
            {
                sum-=a[l];
                l++;
                if(sum>=s)
                lenth=min(lenth,r-l+1);
                else
                break;
            }
            
            
        }
        
        r++;
        
        
    }
    if(lenth==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    cout<<(lenth)<<endl;
    return 0;
}
