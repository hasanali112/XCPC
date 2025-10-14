#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    if(s[0] != s[1] && s[0] != s[2])
    {
        cout<<s[0];
    }
    else if(s[1] != s[0] && s[1] != s[2])
    {
        cout<<s[1];
    }
    else
    {
       char not_dup=s[0];
       for(auto it:s)
       {
           if(it!=not_dup)
           {
               cout<<it;
               break;
           }
       }
    }
    
    return 0;
}