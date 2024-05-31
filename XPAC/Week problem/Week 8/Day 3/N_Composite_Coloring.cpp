#include<bits/stdc++.h>
using namespace std;
int compo(int u)
{
    for (int i=2;i<=u;++i){
        if (u%i==0) return i;
    }

}
int main(){
// /*
//     Author: FRK
//     Date:   30-05-2024
//     Time:   18:50:49
//     File:   B_Composite_Coloring.cpp
// */
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> ans[1002];
        int v[1002];
        for (int i=1;i<=n;++i){
           int u;
           cin>>u; 
           ans[compo(u)].push_back(i);
           
        }

        int cnt=1;
        for (int i=1;i<=33;++i){
            if (ans[i].size()){
                for (auto c:ans[i]){
                    v[c]=cnt;
                }
                cnt++;
            }
        }

        cout<<cnt-1<<"\n";
        for (int i=1;i<=n;++i){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}