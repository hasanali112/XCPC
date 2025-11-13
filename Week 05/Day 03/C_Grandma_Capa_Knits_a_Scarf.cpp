#include <bits/stdc++.h>
using namespace std;
long long inf = 1e9;

int need_remove(string s, char c)
{
    int l = 0, r = s.size() - 1;
    int cnt = 0;

    while (l < r)
    {
        if (s[l] == s[r])
        {
            l++;
            r--;
        }
        else if (s[l] == c)
        {
            l++;
            cnt++;
        }
        else if (s[r] == c)
        {
            r--;
            cnt++;
        }
        else
        {
            return inf;
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int l = 0, r = n - 1;
        while (l < r && s[l] == s[r])
        {
            l++;
            r--;
        }
        if (l >= r)
        {
            cout << 0 << '\n';
            continue;
        }

        char c1 = s[l], c2 = s[r];
        int ans1 = need_remove(s, c1);
        int ans2 = need_remove(s, c2);
        int ans = min(ans1, ans2);
        if (ans >= inf)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }
    return 0;
}
