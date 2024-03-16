#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    int count=0;
    long long h=n;
    for(int i=1;i<m;i++)
    {
        // h=h*i;
        // if(h<m)
        {
            count++;
        }
        // else break;
    }
    cout<<count;
    return 0;
}