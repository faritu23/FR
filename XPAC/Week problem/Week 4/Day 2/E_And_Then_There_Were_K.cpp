#include<bits/stdc++.h>
using namespace std;

void aa(long long int n)
{
    long long int x=n;
    for(int i=0;i<n;i++)
    {
        int x1=pow(2,i);
        if(x1<=n)
        {
            x=x1;   
        }
        else
        {
            break;
        }
    }
    cout<<x-1<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    long long int t; cin>>t;
    while (t--)
    {
        long long int n; cin>>n;
        aa(n);

    }
    
    return 0;
}