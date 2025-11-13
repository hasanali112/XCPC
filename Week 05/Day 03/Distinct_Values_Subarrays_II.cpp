#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long ans = 0;

    map<long long, int> mp;

    int l = 0, dis = 0;

    for (int r = 0; r < n; r++)
    {
        if (mp[a[r]] == 0)
            dis++;
        mp[a[r]]++;

        while (dis > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                dis--;
            l++;
        }

        ans += (r - l + 1);
    }

    cout << ans << "\n";
    return 0;
}
