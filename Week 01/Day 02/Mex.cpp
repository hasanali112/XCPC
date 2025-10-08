#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin>>v[i];
    }

    int mex= 0;
    for (int i = 0; i <a; i++)
    {
     if(v[i] == mex)
     {
        mex++;
     }
    }
    
     cout<<mex<<" ";
    return 0;
}