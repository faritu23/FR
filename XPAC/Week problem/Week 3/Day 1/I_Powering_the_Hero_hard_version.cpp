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
        long long int a[n];
        priority_queue<long long int>pq;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            if(!pq.empty()  && pq.top()>0 && a[i]==0)
            {
                ans+=pq.top();
                pq.pop();
            }
            else if(a[i]>0)
            {
                pq.push(a[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}