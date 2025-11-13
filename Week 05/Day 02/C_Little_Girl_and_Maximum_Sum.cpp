#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> b(n + 2, 0);

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        b[l - 1] += 1;
        b[r] -= 1;
    }

    for (int i = 1; i < n; i++)
    {
        b[i] += b[i - 1];
    }

    b.pop_back();

    sort(a.begin(), a.end(), greater<long long>());
    sort(b.begin(), b.begin() + n, greater<long long>());

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i] * b[i];
    }

    cout << ans << "\n";
    return 0;
}
