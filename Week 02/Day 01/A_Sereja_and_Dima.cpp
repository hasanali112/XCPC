#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    
    int l = 0, r= n-1;
    int s= 0, d = 0;
    bool sa= true;
    while (l<=r)
    {
       int sum = 0;
       if(v[l]>v[r])
       {
           sum = v[l];
           l++;
       }
       else
       {
           sum = v[r];
           r--;
       }
       if(sa)
       {
           s+=sum;
       }
       else
       {
           d+=sum;
       }
       sa = !sa;
    }

    cout<<s<<" "<<d<<endl;
    
    return 0;
}