#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   07-05-2024
    Time:   21:30:35
    File:   B_Maximise_Score.cpp
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

        int mn=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            
            if(i==0)
            {
                mn=min(mn,abs(v[i]-v[i+1]));
            }
            else if(i==n-1)
            {
                mn=min(mn,abs(v[i]-v[i-1]));
            }
            else
            {
                mn=min(mn,max(abs(v[i]-v[i+1]),abs(v[i]-v[i-1])));
                
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}