#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b,c;
    cin>>a>>b>>c;
    int val_one= abs(a);
    int val_two= abs(b);
    int val_three = abs(c);
    if(abs(val_one - val_two) <= val_three)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}