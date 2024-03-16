#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin>>n;
    long long a[n];
    long long sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum<<"\n";
    return 0;
}