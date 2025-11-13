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
        int n, q;
        cin >> n >> q;
        vector<long long> v(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            v[i] = v[i - 1] + x;
        }

        long long total = v[n];

        while (q--)
        {
            int l, r;
            long long k;
            cin >> l >> r >> k;

            long long old_sum = v[r] - v[l - 1];
            long long new_sum = total - old_sum + (r - l + 1) * k;

            if (new_sum % 2 != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
