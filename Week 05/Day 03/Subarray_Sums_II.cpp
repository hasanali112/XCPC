#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long sum = 0, cnt = 0;
    map<long long, long long> mp;
    mp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        cnt += mp[sum - x];
        mp[sum]++;
    }

    cout << cnt << "\n";
    return 0;
}
