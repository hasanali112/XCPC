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
        string a, b;
        cin >> a >> b;
        int pos1 = 0;
        int pos2 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                pos1++;
                if (a[i] == '0')
                {
                    pos2++;
                }
            }
            else
            {
                if (b[i] == '0')
                {
                    pos2++;
                }
            }
        }

        int x = 0;
        int y = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 != 0)
            {
                x++;
                if (a[i] == '0')
                {
                    y++;
                }
            }
            else
            {
                if (b[i] == '0')
                {
                    y++;
                }
            }
        }

        if ((pos2 >= pos1) && (y >= x))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}