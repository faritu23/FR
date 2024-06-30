#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   01-06-2024
    Time:   21:42:06
    File:   Subarray_Sums_I.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int count=0;
    int l=0,r=0;
    ll sum=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum>=x)
        {
            if(sum==x)
            {
                count++;
            }
            while(sum>x)
            {
                sum-=v[l];
                l++;
                if(sum==x) count++;
            }
        }
        r++;
    }
    cout<<count<<endl;
    return 0;
}