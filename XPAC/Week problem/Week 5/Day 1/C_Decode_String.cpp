#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int m='a'-'1';
        for(int i=0;i<n;i++)
        {
            // int c=(s[i]);
            // int m='a'-'1';
            // cout<<s[i]<<" "<<char(m+c)<<endl;

            
            if(s[i]>0 && (i+1)<n && s[i+1]!='0'&& (i+2)<n && s[i+2]=='0')
            {
                if( i+3<n && s[i+3]=='0')
                {
                    int a=s[i]-'1';
                    cout<<char('a'+a);
                }
                else
                {int a=((s[i])-'0')*10;
                int b=s[i+1] -'0';
                cout<<char((a+b)+'a'-1);
                i+=2;}

            }
            else if( i+1<n && i+2<n&& s[i]>0 && s[i+1]=='0' && s[i+2]=='0' )
            {
                
                int a=s[i]-'0';
                int b=(a*10) -1 ;
                cout<<char(b+'a');
                i+=2;
                
                
            }
            else if(s[i]!='0')
            {
                int a=s[i]-'1';
                cout<<char('a'+a);
                
            }
        }
        cout<<endl;
    }
    return 0;
}