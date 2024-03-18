#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> odd;
    vector<int> even;
    long long int sumEven=0;
    long long int sumOdd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sumEven+=a[i];
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    reverse(odd.begin(),odd.end());
    reverse(even.begin(),even.end());
    int x=odd.size();
    if(x%2==0)
    {
        for(int i=0;i<x;i++)
        {
            sumOdd+=odd[i];
        }
    }
    else
    {
        for(int i=0;i<x-1;i++)
        {
            sumOdd+=odd[i];
        }
    }

    long long total=sumOdd+sumEven;
    cout<<total;
    return 0;
}