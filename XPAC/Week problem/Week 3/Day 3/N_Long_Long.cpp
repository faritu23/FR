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
        vector<long long int> v;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            

            sum+=abs(a[i]);
            if(a[i]!=0)
            {
                v.push_back(a[i]);
            }
        }
        long long int count=0;
        long long int x=v.size();
        bool flag=false;
        for(int i=0;i<x;i++)   
        {
            if(v[i]<0 && !flag)
            {
                count++;
                flag=true;
            }
            else if(v[i]>0)
            {
                flag=false;
            }
        }
        cout<<sum<<" "<<count<<endl;

    }
    return 0;
}