#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int k;
    if(a==c ||b==c)
    {
        cout<<"Yes"<<'\n';
        return 0;
    }
    else if(c%a==0 || c%b==0)
    {
        cout<<"Yes"<<'\n';
        return 0;
    }
    else 
    {
        for(int i=0;i<=c;i++)
        {
            for(int j=0;j<=c;j++)
            {
                if(((b*j+a*i))==c)
                {
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}

