#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<long long> l(m + 1), r(m + 1), d(m + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }

    vector<long long> op_diff(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        op_diff[x] += 1;
        op_diff[y + 1] -= 1;
    }

    vector<long long> op_count(m + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        op_count[i] = op_count[i - 1] + op_diff[i];
    }

    vector<long long> diff(n + 2, 0);
    for (int i = 1; i <= m; i++)
    {
        diff[l[i]] += d[i] * op_count[i];
        diff[r[i] + 1] -= d[i] * op_count[i];
    }

    vector<long long> inc(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        inc[i] = inc[i - 1] + diff[i];
    }

    for (int i = 1; i <= n; i++)
    {
        a[i] += inc[i];
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}