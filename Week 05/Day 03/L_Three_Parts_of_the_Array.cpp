#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> d(n);
    for (int i = 0; i < n; i++)
        cin >> d[i];

    long long left_sum = 0, right_sum = 0, ans = 0;
    int l = 0, r = n - 1;

    while (l <= r)
    {
        if (left_sum == right_sum)
        {
            ans = left_sum;
        }

        if (left_sum <= right_sum)
        {
            left_sum += d[l++];
        }
        else
        {
            right_sum += d[r--];
        }
    }

    if (left_sum == right_sum)
        ans = left_sum;

    cout << ans << "\n";
    return 0;
}
