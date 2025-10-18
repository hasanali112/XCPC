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
        string s;
        cin >> s;
        set<char> st;

        for (auto c : s)
        {
            st.insert(c);
        }

        string new_string;

        for (auto c : st)
        {
            new_string += c;
        }

        map<char, char> mp;

        for (int i = 0; i < new_string.size(); i++)
        {
            mp[new_string[i]] = new_string[new_string.size() - 1 - i];
        }

        for (auto c : s)
        {
            cout << mp[c];
        }

        cout << endl;
    }

    return 0;
}