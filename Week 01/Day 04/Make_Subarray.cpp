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
        cin.ignore();
        string s;
        cin>>s;
        int cnt = 0;
        for (int i = 0; i <s.length(); i++)
        {
            if(s[i] == '1' && s[i+1]== '1')
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        
    }
    
    return 0;
}