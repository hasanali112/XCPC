#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int total_sum = 0;
    for (int i = 1; i <=n-1; i++)
    {
        int x;
        cin>>x;
        total_sum +=x;
       
    }

    int total_num=0;
    for (int i = 1; i <=n; i++)
    {
       total_num +=i;
    }
    
    int missing_num = total_num - total_sum;

    cout<< missing_num << endl;
    
    return 0;
}