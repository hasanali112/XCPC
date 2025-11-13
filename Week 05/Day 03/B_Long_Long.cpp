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
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        long long max_sum = 0;
        for (auto x : a)
            max_sum += abs(x);

        int ops = 0;
        bool in_neg = false;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] < 0)
            {
                if (!in_neg)
                {
                    ops++;
                    in_neg = true;
                }
            }
            else
            {
                in_neg = false; // zero বা positive break segment
            }
        }

        cout << max_sum << " " << ops << "\n";
    }
}
