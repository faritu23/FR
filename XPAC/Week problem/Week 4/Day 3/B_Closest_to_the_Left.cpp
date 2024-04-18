#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin>>n>>k;

    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<k;i++)
    {
        
        int x; cin>>x;
        cout<<upper_bound(v.begin(),v.end(),x)-v.begin()<<endl;
    }
    return 0;
}