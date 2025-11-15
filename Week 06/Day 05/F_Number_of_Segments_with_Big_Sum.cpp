#include <bits/stdc++.h>
using namespace std;

bool dig(string x, string y)
{
    for (char a : x)
    {
        for (char b : y)
        {
            if (a == b)
                return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        string sx = to_string(x);

        for (int y = 1;; y++)
        {
            string sy = to_string(y);

            if (dig(sx, sy))
            {
                cout << y << "\n";
                break;
            }
        }
    }
    return 0;
}
