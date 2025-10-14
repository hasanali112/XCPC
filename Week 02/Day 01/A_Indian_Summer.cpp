#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<pair<string,string>>v;
    for (int i = 0; i < t; i++)
    {
       string s1,s2;
       cin>>s1>>s2;
      
       bool flag = false;
       for (auto it: v)
       {
           if(it.first == s1 && it.second == s2)
           {
               flag = true;
               break;
           }
       }
       if(!flag)
       {
           v.push_back({s1,s2});
       }
       
    }

    cout<<v.size()<<endl;   
    
    return 0;
}