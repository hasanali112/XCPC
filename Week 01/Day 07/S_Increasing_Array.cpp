#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long int count = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] < a[i - 1])
        {
           count += (a[i - 1] - a[i]);
           a[i] = a[i - 1];
        }
        
    }
    cout<<count<<endl;
    return 0;
}