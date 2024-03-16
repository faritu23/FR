#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.empty())
    {
        cout<<"0000"<<"\n";
    }
    else if(s.size()==4)
    {
        cout<<s<<"\n";
    }
    else if(s.size()==3)
    {
        cout<<"0"<<s<<"\n";
    }
    else if(s.size()==2)
    {
        cout<<"00"<<s<<"\n";
    }
    else if(s.size()==1)
    {
        cout<<"000"<<s<<"\n";
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     list <int> l;
//     string s1;
//     {
       
//         if(s.size()==4)
//         {
//             cout<<s<<"\n";
//             // break;
//         }
//         else if(s.size()==3)
//         {
//             s1.push_back('0');
//             for(int i=0;i<s.size();i++)
//             s1.push_back(s[i]);
//             cout<<s1<<"\n";
//         }
//         else if(s.size()==2)
//         {
//             for(int i=0;i<2;i++)
//             s1.push_back('0');
//             for(int i=0;i<s.size();i++)
//             s1.push_back(s[i]);
//             cout<<s1<<"\n";
//         }
//         else if(s.size()==1)
//         {
//             for(int i=0;i<3;i++)
//             s1.push_back('0');
//             for(int i=0;i<s.size();i++)
//             s1.push_back(s[i]);
//             cout<<s1<<"\n";
//         }
        
//     }
//     // cout<<s;
//     return 0;
// }