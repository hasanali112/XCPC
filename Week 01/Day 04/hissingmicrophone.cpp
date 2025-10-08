#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool flag = false;
    for (int i = 0; i <s.length()-1; i++)
    {
        if(s[i]== 's' && s[i+1] == 's')
        {
            flag = true;
            break;
        }
       
    }

    if(flag == false)
    {
        cout<<"no hiss"<<endl;
    }
    else
    {
        cout<<"hiss"<<endl;
    }
    
    return 0;
}