#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0] == s[s.length()-1] && s[1] == 'w')
    {
        cout<<"Cute"<<endl;
    }
    else
    {
        cout<< "No"<< endl;
    }
    return 0;
}