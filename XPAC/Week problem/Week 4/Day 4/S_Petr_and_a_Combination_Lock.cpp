#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%360==0)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        bool flag=false;
        for(int i=0;i<(1<<n);i++)
        {
            int s=0;
            for(int k=0;k<n;k++)
            {
                if((i&(1<<k))!=0)
                {
                    s+=a[k];
                }
                else
                {
                    s-=a[k];
                }
            }
        if((s%360)==0)
        {
            flag=true;
            break;
        }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}