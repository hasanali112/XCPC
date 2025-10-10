#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<bool>v(26, false);

    for (auto c : s)
    {
        v[c-'a'] = true;
    }   
    
    char find_car = ' ';

    for (int i = 0; i <26; i++)
    {
        if(!v[i])
        {
            find_car = 'a' + i;
            break;
        }
    }

    if(find_car == ' ')
    {
        cout<<"None"<<endl;
    }
    else
    {
        cout<<find_car<<endl;
    }
    
    
    return 0;
}