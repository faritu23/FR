#include<bits/stdc++.h>
using namespace std;

int main()
{
    

    long long t; cin>>t;
    while(t--)
    {
        long long n;
         cin>>n;
        long long sum=0;
        while(n>0)
        {
            sum+=n;
            n/=2;
            if(n==0)
            {
                break;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}