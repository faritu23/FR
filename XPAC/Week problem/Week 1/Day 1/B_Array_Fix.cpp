#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (i == 0 && a[i] > a[i + 1])
            {
                if (a[i] < 10)
                {
                    flag = false;
                }
                else
                {
                    int k = a[i];
                    int second = k % 10;
                    int first = k / 10;
                    if (i != 0 || (a[i + 1] < second || first > second))
                    {
                        flag = false;
                        break;
                    }
                }
            }
            else if (i != 0 && a[i] < a[i - 1])
            {
                if(a[i-1] <10)
                {
                    flag=false;
                }
                else
                {int k = a[i - 1];
                int second = k % 10;
                int first = k / 10;
                if ((a[i] < second || first > second))
                {
                    flag = false;
                    break;
                }}
            }
            else if (i!=0 && a[i] > a[i + 1])
            {
                int k = a[i];
                int second = k % 10;
                int first = k / 10;
                if (i != 0 || (a[i - 1] > first || a[i + 1] < second || first > second))
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int  t; cin>>t;
//     while(t--)
//     {
//         int n; cin>>n;
//         int a[n],b[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//             b[i]=a[i];
//         }
//         bool flag=true;
//         for(int i=0;i<n;i++)
//         {
//             if(a[i] >a[i+1] && a[i] <10)
//             {
//                 flag=false;
//                 break;
//             }
//             else if(a[i]>a[i+1])
//             {
//                 int k=a[i];
//                 int second=k%10;
//                 int first=k/10;
//                 if( i!=0 && (a[i] > first || a[i+1] <second || first>second))
//                 {
//                     flag=false;
//                     break;
//                 }
//             }
//         }
//         if(flag==true)
//         {
//             cout<<"YES"<<endl;
//         }
//         else
//         {
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }