#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    if(a>b)
    {
        int max_coin = a*2 - 1;
        cout<<max_coin<<endl;
    }
    else if(b>a)
    {
        int max_coin = b*2 - 1;
        cout<<max_coin<<endl;
    }
    else
    {
       cout<<a+b<<endl;
    }
        
    return 0;
}