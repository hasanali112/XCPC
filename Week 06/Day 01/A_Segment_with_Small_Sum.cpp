#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int min_idx = 0;
    int i=0;
    int j=n-1;

    int sum =0;

    while (i < j)
    {
       if(sum<=k)
       {
           cout<<v[i]<<" "<<v[j]<<endl;   
           sum = sum+ v[i] + v[j];
           min_idx++;
       }
       i++;
       j--;
       cout<<"sum-->"<<sum<<endl;
    }

    cout << min_idx << endl;
     cout<<sum<<endl;
    
    return 0;
}