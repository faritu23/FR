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

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int a,b,c;
//     cin>>a>>b>>c;
//     long long int k;
//     if(a==c)
//     {
//         cout<<"Yes"<<'\n';
//         return 0;
//     }
//     else if(b==c)
//     {
//         cout<<"Yes"<<'\n';
//         return 0;
//     }
//     else if(c%a==0 || c%b==0)
//     {
//         cout<<"Yes"<<'\n';
//     }
//     else if( a<c && b<c)
//     {
//         for(int i=1;i<=c;i++)
//         {
//             k=((b*i) + a);
//             if(k>=c)
//             {
//                 break;
//             }
//         }
//         if(k==c)
//         {
//             cout<<"Yes"<<'\n';
//         }
//         else
//         {
//             cout<<"No"<<'\n';
//         }
        
//     }
//     else if( a<c && b<c)
//     {
//             cout<<k<<endl;
//         for(int i=1;i<=c;i++)
//         {
//             cout<<k<<endl;
//             k=((a*i) + b);
//             if(k>=c)
//             {
//                 break;
//             }
//         }
//         if(k==c)
//         {
//             cout<<"Yes"<<'\n';
//         }
//         else
//         {
//             cout<<"No"<<'\n';
//         }
        
//     }
//     else if( b<c && a>c)
//     {
//         for(int i=1;i<=c;i++)
//         {
//             k=((b*i));
//             if(k>=c)
//             {
//                 break;
//             }
//         }
//         if(k==c)
//         {
//             cout<<"Yes"<<'\n';
//         }
//         else
//         {
//             cout<<"No"<<'\n';
//         }
        
//     }
//     else if( a<c && b>c)
//     {
//         for(int i=1;i<=c;i++)
//         {
//             k=((a*i));
//             if(k>=c)
//             {
//                 break;
//             }
//         }
//         if(k==c)
//         {
//             cout<<"Yes"<<'\n';
//         }
//         else
//         {
//             cout<<"No"<<'\n';
//         }
        
//     }
//     else
//     {
//         cout<<"No"<<'\n';
//     }
//     return 0;
// }