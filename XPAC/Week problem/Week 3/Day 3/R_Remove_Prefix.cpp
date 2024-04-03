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
        vector<int> a(n);
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            if(s.count(a[i])==0)
            {
                s.insert(a[i]);
            }
            else
            {
                break;
            }
        }
        cout<<n-s.size()<<endl;

    }
    return 0;
}