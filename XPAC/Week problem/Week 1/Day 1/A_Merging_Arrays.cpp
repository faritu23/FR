#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int aa[n],bb[m];
    for(int i=0;i<n;i++)
    {
        cin>>aa[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>bb[i];
    }
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++)
    {
        pq.push(aa[i]);
    }
    for(int i=0;i<m;i++)
    {
        pq.push(bb[i]);
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}