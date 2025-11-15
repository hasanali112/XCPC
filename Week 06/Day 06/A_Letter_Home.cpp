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
        long long n, s;
        cin >> n >> s;

        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;

        long long L = a[0];
        long long R = a[n - 1];

        long long result = min(abs(s - L), abs(s - R)) + (R - L);

        cout << result << "\n";
    }

    return 0;
}
