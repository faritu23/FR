
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
/*
    Author: FRK
    Date:   01-06-2024
    Time:   17:14:31
    File:   Concert_Tickets.cpp
*/
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin>>n>>m;
    vector<int> ticket(n);
    vector<int>customer(m);
    multiset<int> s;
    for(int i=0;i<n;i++) cin>>ticket[i];
    for(int i=0;i<n;i++) s.insert(ticket[i]);
    for(int i=0;i<m;i++) cin>>customer[i];
    for(int i=0;i<m;i++)
    {
        auto upperbound=s.upper_bound(customer[i]);
        if(upperbound!=s.begin())
        {
            upperbound--;
            cout<<*(upperbound)<<endl;
            s.erase(upperbound);
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}