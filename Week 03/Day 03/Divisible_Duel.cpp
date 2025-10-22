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
        int x, y;
        cin >> x >> y;
        vector<int> a, b;
        for (int i = x; i <= y; i++)
        {
            if (i % x == 0)
            {
                if (i % 2 == 0)
                {
                    a.push_back(i);
                }
                else
                {
                    b.push_back(i);
                }
            }
        }
        int evenSum = 0, oddSum = 0;
        for (int i = 0; i < a.size(); i++)
        {
            evenSum += a[i];
        }
        for (int i = 0; i < b.size(); i++)
        {
            oddSum += b[i];
        }

        if (evenSum >= oddSum)
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