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
        string s;
        cin >> s;

        vector<char> v;
        stack<int> cap_char, sml_cap;

        for (auto c : s)
        {
            if (c == 'B')
            {
                if (!cap_char.empty())
                {
                    int pos = cap_char.top();
                    cap_char.pop();
                    v[pos] = '\0';
                }
            }
            else if (c == 'b')
            {
                if (!sml_cap.empty())
                {
                    int pos = sml_cap.top();
                    sml_cap.pop();
                    v[pos] = '\0';
                }
            }
            else
            {
                v.push_back(c);
                if (isupper(c))
                {
                    cap_char.push(v.size() - 1);
                }
                else
                {
                    sml_cap.push(v.size() - 1);
                }
            }
        }

        string ans;
        for (auto c : v)
        {
            if (c != '\0')
            {
                ans += c;
            }
        }
        cout << ans << endl;
    }

    return 0;
}