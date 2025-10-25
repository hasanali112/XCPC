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
        long long n;
        int m, q;
        cin >> n >> m >> q;

        vector<long long> v(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        vector<long long> a(m), b(m);

        for (int i = 0; i < m; i++)
        {
            if (i == 0)
            {
                a[i] = v[i] - 1;
            }
            else
            {
                a[i] = (v[i] - v[i - 1]) / 2;
            }

            if (i == m - 1)
            {
                b[i] = n - v[i];
            }
            else
            {
                b[i] = (v[i + 1] - v[i]) / 2;
            }
        }

        while (q--)
        {
            long long d;
            cin >> d;

            auto it = lower_bound(v.begin(), v.end(), d);
            long long ans = LLONG_MAX;

            if (it != v.begin())
            {
                long long l = *(it - 1);
                long long dist = d - l;
                int idx = it - v.begin() - 1;
                ans = min(ans, max(dist, b[idx]));
            }

            if (it != v.end())
            {
                long long r = *it;
                long long dist = r - d;
                int idx = it - v.begin();
                ans = min(ans, max(dist, a[idx]));
            }

            cout << ans << "\n";
        }
    }

    return 0;
}