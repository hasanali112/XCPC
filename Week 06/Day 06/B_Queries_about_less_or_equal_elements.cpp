#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);

    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    sort(a.begin(), a.end());

    for (auto &x : b)
    {
        cout << upper_bound(a.begin(), a.end(), x) - a.begin() << " ";
    }

    return 0;
}
