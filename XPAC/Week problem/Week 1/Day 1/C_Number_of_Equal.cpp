#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    long long int l=0,r=0,ans=0,cur;
    while(l<n && r<m)
    {
        cur=a[l];
        int count1=0,count2=0;
        while(a[l]==cur && l<n)
        {
            count1++;
            l++;
        }
        while(cur>b[r] && r<m)
        {
            r++;
        }
        while(b[r]==cur && r<m)
        {
            count2++;
            r++;
        }
        ans+=(count1*count2*1LL);
    }
    cout<<ans<<"\n";
    return 0;
}