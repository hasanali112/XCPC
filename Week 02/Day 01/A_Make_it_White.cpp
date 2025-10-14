#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<char>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int l=0;
        int r=n-1;
        int f_idx=0, l_idx=n-1;
        while (l<=r)
        {
           if(v[l]== 'B')
           {
              f_idx=l;
              break;
           }else
           {
               l++;
           }
        }
        while (l<=r)
        {
           if(v[r]== 'B')
           {
              l_idx=r;
              break;
           }else
           {
               r--;
           }
        }
        
        int count =0;
        for (int i = f_idx; i <= l_idx; i++)
        {
           count++;
        }
         
       cout<<count<<endl;
    }
    return 0;
}