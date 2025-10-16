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
        vector<int> a, b;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] <= 2 * a[i] && a[i] <= 2 * b[i])
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}