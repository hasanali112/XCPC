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

        int m;
        cin >> m;

        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]].push_back(i);
        }

        for (int i = 0; i < m; i++)
        {
            string s;
            cin >> s;

            if (s.length() != n)
            {
                cout << "NO\n";
                continue;
            }

            bool flag = true;

            for (auto [x, y] : mp)
            {
                char first_char = s[y[0]];
                for (int pos : y)
                {
                    if (s[pos] != first_char)
                    {
                        flag = false;
                        break;
                    }
                }
                if (!flag)
                    break;
            }

            if (!flag)
            {
                cout << "NO\n";
                continue;
            }

            map<char, vector<int>> mp1;
            for (int j = 0; j < n; j++)
            {
                mp1[s[j]].push_back(j);
            }

            for (auto [x, y] : mp1)
            {
                int first_val = v[y[0]];
                for (int pos : y)
                {
                    if (v[pos] != first_val)
                    {
                        flag = false;
                        break;
                    }
                }
                if (!flag)
                    break;
            }

            if (flag)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}