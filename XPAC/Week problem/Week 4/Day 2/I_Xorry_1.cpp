#include <bits/stdc++.h>
using namespace std;
void xorry(int x)
{
    int y = x;
    int cnt = 0;
    while(y>1)
    {
        y/=2;
        cnt++;
    }
    int tmp=pow(2,cnt);
    cout << (x - tmp )<< " " << tmp << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        xorry(x);
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// void xorry(int x)
// {
//     int mn=INT_MAX;
//     int s,l;
//     for(int i=0;i<x;i++)
//     {
//         for(int j=i+1;j<=x;j++)
//         {
//             if((i^j)==x)
//             {
//                 int a=abs(j-i);
//                 if(a<mn)
//                 {
//                     mn=a;
//                     s=i;
//                     l=j;
//                 }

//             }
//         }
//     }
//     cout<<s<<" "<<l<<endl;
// }
// int main()
// {
//     int t; cin>>t;
//     while(t--)
//     {
//         int x; cin>>x;
//         xorry(x);
//     }
//     return 0;
// }