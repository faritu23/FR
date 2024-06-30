// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
// /*
//     Author: FRK
//     Date:   18-05-2024
//     Time:   23:29:17
//     File:   Playlist.cpp
// */
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n; cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++) cin>>v[i];
//     // map<int,int> mp;
//     set<int> mp;
//     int mx=INT_MIN;
//     int j=0;
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         if(mp.find(v[i])==mp.end())
//         {
//             // mp[v[i]]++;
//             mp.insert(v[i]);
            
//         }
//         else if(mp.find(v[i])!=mp.end())
//         {
//             int mm=mp.size();
//             mx=max(mx,mm);
//             mp.clear();
//             i=j+1;
//             j=i;
//             // mp[v[i]]++;
//             mp.insert(v[i]);
//         // cout<<v[i]<<" "<<mp.size()<<" "<<mx<<endl;
//         }
        
//     }
//     int mm=mp.size();
//     mx=max(mx,mm);
//     cout<<mx<<endl;
//     return 0;
// }


#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    /*
        Author: FRK
        Date:   18-05-2024
        Time:   23:29:17
        File:   Playlist.cpp
    */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    set<int> mp;
    int mx = INT_MIN;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        while (mp.find(v[i]) != mp.end())
        {
            int m=mp.size();
            mp.erase(v[l]);
            mx = max(mx, m);
            l++;
        }
        mp.insert(v[i]);
    }
    int m=mp.size();
    mx = max(mx, m);
    cout << mx << endl;
    return 0;
}