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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool has_even = false, has_odd = false;
        for (int x : v)
        {
            if (x % 2 == 0)
                has_even = true;
            else
                has_odd = true;
        }

        if (has_even && has_odd)
        {
            sort(v.begin(), v.end());
        }

        for (int x : v)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}