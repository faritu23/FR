// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t; cin>>t;
//     while(t--)
//     {
//         int n; cin>>n;
//         int a[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         int mx=INT_MIN;
//         for(int i=0;i<n;i++)
//         {
            
//             int b=a[i]-(i+1);
//             mx=max(mx,b);
//         }
//         cout<<mx<<"\n";
//     }
//     return 0;
// }






#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mx = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mx = max(mx, x - i);
        }
        cout << mx << "\n";
    }

    return 0;
}