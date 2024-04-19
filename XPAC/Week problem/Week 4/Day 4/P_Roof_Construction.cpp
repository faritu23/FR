#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int k;
        for(int i=0;i<n;i++)
        {
            if(pow(2,i)<n)
            {
                k=i;
            }
            else
            {
                break;
            }
        }
        
        
        for(int i=(pow(2,k)-1);i>=0;i--)
        {
            
            cout<<i<<" ";
        }
        for(int i=pow(2,k);i<n;i++)
        {
            cout<<i<<" ";

        }
        
        cout<<endl;
    }
    return 0;
}