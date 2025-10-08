#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int cnt=0, cnt_one=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]==1)
           {
               cnt++;
           }
           else
           {
               cnt_one++;
           }
       }
      
       int sum = 0;
       if(cnt%2 == 0)
       {
          sum= (cnt/2) + cnt_one;
          cout<<sum<<endl;
       }
       else
       {
        sum = (cnt/2) + 1 + cnt_one;
        cout<<sum<<endl;
       }
    }
    
    
    
    return 0;
}