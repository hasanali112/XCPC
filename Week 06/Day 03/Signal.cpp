#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int find_idx = -1;
        
        for (int i = 0; i <n; i++)
        {
            if(s[i] == '0')
            {
                find_idx = i;
                break;
            }
        }
        
        int count = 0;
        if(find_idx != -1)
        {
            for (int i = find_idx; i < n; i++)
            {
                if(s[i] == '1')
                {
                    count++;
                }
            }
        }
        
        cout << count << "\n";
    }
    
    return 0;
}