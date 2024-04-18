#include<bits/stdc++.h>
using namespace std;
const long long int m=1>>30;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t; cin>>t;
    while(t--)
    {
        int n,B;
        cin>>n>>B;

        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        
        int count=-1;
        for(int i=0;i<n;i++)
        {
            if((a[i]&B)==B)
            count&=a[i];
        }
        if(count==B)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        // cout<<h<<" "<<l<<" "<<r;
    }
    return 0;
}
