#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<string> v = {"Ocelot", "Serval", "Lynx"};
    
    string x, y;
    cin>>x>>y;

    int x_idx = -1, y_idx = -1;

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == x)
        {
            x_idx = i;
        }
        if(v[i] == y)
        {
            y_idx = i;
        }
    }

    if(x_idx >= y_idx)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }   
    
    
    
    return 0;
}