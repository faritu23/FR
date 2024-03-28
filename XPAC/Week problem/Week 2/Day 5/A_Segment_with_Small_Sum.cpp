#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
 
    int n;cin>>n;
    long long s; cin>>s;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=0;
    long long sum=0;
    int lenth=0;
    while(r<n)
    {
        sum+=a[r];
        if(sum<=s)
        {
            lenth=max(lenth,r-l+1);
        }
        else
        {
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<lenth<<'\n';
    return 0;
}