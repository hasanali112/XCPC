//Given an array of integers and a number k, find the maximum sum of any contiguous subarray of size k

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
       cin>>v[i];
    }

    int sum = 0;

    for (int i = 0; i <k; i++)
    {
        sum += v[i];
    }

    int max_sum= sum;

    for (int i = k; i < n; i++)
    {
        int win_sum = sum - v[i-k] + i;
        max_sum= max(max_sum, win_sum);
    }
    
    
    cout<<max_sum<<endl;
    
    return 0;
}