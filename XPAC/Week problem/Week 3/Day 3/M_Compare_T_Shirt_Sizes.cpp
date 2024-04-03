#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size();
        int m = s2.size();
        char a = s1[n - 1];
        char b = s2[m - 1];

        if (s1 == s2)
        {
            cout << "=" << endl;
        }
        else
        {if(a==b)
        {
            if(n>m && a=='S' && b=='S')
            {
                cout<<"<"<<endl;
            }
            else if(n<m && a=='S' && b=='S')
            {
                cout<<">"<<endl;
            }
            else if(n>m && a=='L' && b=='L')
            {
                cout<<">"<<endl;
            }
            else if(n>m && a=='M'&& b=='M')
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"<"<<endl;
            }
        }
        else
        {
                if ((a == 'L') || (a == 'M' && b == 'S'))
                {
                    cout << ">" << endl;
                }
                else if ((b == 'L') || (a == 'S' && b == 'M') )
                {
                    cout << "<" << endl;
                }
        }}
    }
    return 0;
}