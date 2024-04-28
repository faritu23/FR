#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,K;
        cin>>n>>K;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            a[i]+=(i+1);
        }
        sort(a,a+n);
        ll count=0;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            if(sum+a[i]>K) break;
            else
            {
                sum+=a[i];
                count++;
            }
        }
        cout<<count<<endl;
    }
}