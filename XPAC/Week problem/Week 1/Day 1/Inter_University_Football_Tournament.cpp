#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    // cout<<t<<endl;
    while(t--)
    {
        long long int n; cin>>n;
        // int h=n;
        // cout<<n<<endl;
        if(n==1)
        {
            cout<<2<<"\n";
        }
        else if(n==3)
        {
            cout<<3<<"\n";
        }
        else{
            for(long long int i=4;i<=n/2;i++)
            {
                long long k=(i*(i-1))/2;
                if(k==n)
                {
                    cout<<i<<endl;
                    break;
                }
                if(k>n)
                {
                    cout<<-1<<endl;
                    break;
                }
                
            }
        }
    }
    return 0;
}