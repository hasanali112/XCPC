#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        long long target = x - a[i].first;
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            long long sum = a[l].first + a[r].first;
            if (sum == target)
            {
                vector<int> ans = {a[i].second, a[l].second, a[r].second};
                sort(ans.begin(), ans.end());
                cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
                return 0;
            }
            else if (sum < target)
                l++;
            else
                r--;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
