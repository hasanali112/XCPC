#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
    {
      if(n != 0)
      {
    long long sq = (n * (n + 1) * (2 * n + 1)) / 6;
      cout<<sq<<endl;
      }
    }
    return 0;
}