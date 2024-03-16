#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int a[n],b[m];
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
        int count1=0,count2=0;
        cur=a[l];
        while (a[l] == cur && l < n) {
            count1++;
            l++;
        }
        while (cur > b[r] && r < m) {
            r++;
        }
        while (b[r] == cur && r < m) {
            count2++;
            r++;
        }
        ans += (1LL * count1 * count2);
    }
    cout<<ans<<'\n';
    return 0;
}
