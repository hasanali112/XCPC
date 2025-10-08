#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        int min_dst = INT_MAX;
        for (int i = 1; i <=a; i++)
        {
            int x, y;
            cin>>x>>y;
           int cnt = abs(b-x) + abs(c-y);
           min_dst = min(min_dst, cnt);
        }

        cout<<min_dst<<endl;
        
    }
    
    return 0;
}