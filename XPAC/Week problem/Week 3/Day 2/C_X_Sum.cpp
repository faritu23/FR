#include<bits/stdc++.h>
using namespace std;
const int N=205;
long long int n,m;
int a[N][N];
vector<pair<int,int>> v={{-1,-1},{1,1},{-1,1},{1,-1}};
bool valid(long long int i,long long int j)
{
    return (i>=0 && j>=0 && i<n&& j<m );
}
long long  dfs(long long int i,long long int j)
{
    long long sum=a[i][j];
    for(int i1=0;i1<4;i1++)
    {
        long long int ci=v[i1].first+i;
        long long int cj=v[i1].second+j;
        while(valid(ci,cj))
        {
            sum+=a[ci][cj];
            ci+=v[i1].first;
            cj+=v[i1].second;
            
        }
    }
    return sum;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        long long mx=LLONG_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                
                sum= dfs(i,j);
                mx=max(mx,sum);
                
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}