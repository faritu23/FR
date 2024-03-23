#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];

        }
        for(int i=0;i<n;i++)
        {
            int a;cin>>a;
            string s; cin>>s;
            int count=0,count2=0;
            int neg=0,posi=0;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]=='U')
                {
                    neg++;
                }
                else if(s[j]=='D'){
                    posi++;
                }
            }
            int ans=array[i];
            if(neg> posi)
            {
                int b=(neg-posi);
                ans-=b;
            }
            else if(posi> neg)
            {
                int b=(posi-neg);
                ans+=b;
            }
            if(ans>9)
            {
                ans-=10;
            }
            if(ans<0)
            {
                ans+=10;
            }
            cout<<ans<<" ";

        }
        cout<<endl;
    }
    return 0;
}