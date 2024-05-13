#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    /*
        Author: FRK
        Date:   09-05-2024
        Time:   13:55:48
        File:   B_3_palindrome.cpp
    */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    for (int i = 0; i < (n+1) / 2; i++)
    {
        if (i % 2 == 0)
        {
            s.push_back('a');
            s.push_back('a');
        }
        else
        {
            s.push_back('b');
            s.push_back('b');
        }
    }

    if (n % 2 == 1)
    {
        s.pop_back();
    }
    cout << s << endl;
    return 0;
}