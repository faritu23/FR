#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   04-05-2024
    Time:   03:27:00
    File:   E_Wooden_Toy_Festival.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        auto ok=[&](ll mid)
        {
            int l=0,cnt=1;
            for(int r=0;r<n;r++)
            {
                if(v[r]-v[l]>(mid*2))
                {
                    cnt++;
                    l=r;
                }
            }
            return cnt<=3;

        };

        ll l=0,r=1e9,mid,ans;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}