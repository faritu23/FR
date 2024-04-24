#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    int f[101]={0};
    
    int m;cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        f[b[i]]++;
    }
    sort(b,b+m);
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        int flag=false;
        for(int j=0;j<m;j++)
        {
            int s=abs(a[i]-b[j]);
            if(f[b[j]]>0)
            {
                if(s==1 || s==0)
                {
                    flag=true;
                    int c=f[b[j]];
                    f[b[j]]=c-1;
                    break;
                }
            }
        }
            if(flag)
            {
                count++;
            }
    }
    cout<<count<<endl;
    
    return 0;
}