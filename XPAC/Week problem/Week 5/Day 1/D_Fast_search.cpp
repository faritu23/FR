#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int test ; cin>>test;
    while(test--)
    {
        int l,r; cin>>l>>r;
        auto it=lower_bound(a.begin(),a.end(),l);
        auto it1=upper_bound(a.begin(),a.end(),r);

        int m=(it1-a.begin())-(it-a.begin());
        cout<<m<<" ";

    }
    return 0;
}