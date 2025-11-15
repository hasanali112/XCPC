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

        string s;
        cin >> s;
        int min_val = '9';
        for (char c : s)
        {
            if (c < min_val)
                min_val = c - '0';
        }

        cout << min_val << endl;
    }

    return 0;
}