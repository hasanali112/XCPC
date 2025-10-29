#include <bits/stdc++.h>
using namespace std;

long long all(vector<long long> &v)
{
    long long gcd = v[0];
    for (auto x : v)
    {
        gcd = __gcd(gcd, x);
    }
    return gcd;
}

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
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        long long g = all(v);

        if (g == 1)
        {
            cout << 2 << "\n";
            continue;
        }

        long long ans = -1;
        for (long long x = 2; x <= 1000000; x++)
        {
            if (__gcd(g, x) == 1)
            {
                ans = x;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
