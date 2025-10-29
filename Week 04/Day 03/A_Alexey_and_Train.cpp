
#include <bits/stdc++.h>
using namespace std;
int n, s, t, a[105], b[105], p[105];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (cin >> t; t--;)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i] >> b[i];
        for (int i = 1; i <= n; i++)
            cin >> p[i];
        s = 0;
        for (int i = 0; i < n; i++)
        {
            s = max(s + (b[i] - a[i] + 1) / 2, b[i]);
            s += a[i + 1] - b[i] + p[i + 1];
        }
        cout << s << endl;
    }

    return 0;
}