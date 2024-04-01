#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        vector<long long int> a(n),b(n),c(n);
        vector<pair<long long int,long long int>> va,vb,vc;
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
            va.push_back({a[i],i});
        }
        for(long long int i=0;i<n;i++)
        {
            cin>>b[i];
            vb.push_back({b[i],i});
        }
        for(long long int i=0;i<n;i++)
        {
            cin>>c[i];
            vc.push_back({c[i],i});
        }
        sort(va.begin(),va.end(),greater<>());
        sort(vb.begin(),vb.end(),greater<>());
        sort(vc.begin(),vc.end(),greater<>());
        
        long long sum=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if((va[i].second!=vb[j].second) && (vb[j].second!=vc[k].second) && (va[i].second!=vc[k].second))
                    {
                        long long s=(va[i].first+vb[j].first+vc[k].first);
                        sum=max(s,sum);
                    }
                }
            }
        }
        cout<<sum<<endl;
        
        
    }
    return 0;
}