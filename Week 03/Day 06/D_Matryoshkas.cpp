#include <bits/stdc++.h>
using namespace std;

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int a = 0;
        int b = 0;
        int pv = -2;

        for (auto [x, cnt] : mp)
        {
            if (x != pv + 1)
            {
                b = 0;
            }
            if (cnt > b)
            {
                a += cnt - b;
            }
            b = cnt;
            pv = x;
        }

        cout << a << "\n";
    }

    return 0;
}