#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        string t = s.substr(i, 2);
        mp[t]++;
    }

    string ans;
    int mx = 0;
    for (auto [x, y] : mp)
    {
        if (y > mx)
        {
            mx = y;
            ans = x;
        }
    }

    cout << ans << endl;
    return 0;
}