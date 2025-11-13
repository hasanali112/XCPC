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
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;

        int ans = 0;
        int i = 0;
        while (i < n)
        {
            if (s[i] == 'W')
            {
                i++;
            }
            else
            {
                ans++;
                i += k;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
