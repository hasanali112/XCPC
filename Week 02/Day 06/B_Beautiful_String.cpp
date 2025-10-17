#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    string t = s;
    reverse(s.begin(), s.end());
    return s == t;
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
        cin >> n;
        string s;
        cin >> s; // ✅ এখানে ঠিক করা হয়েছে

        if (palindrome(s))
        {
            cout << "0" << endl;
            continue;
        }

        vector<int> p;
        for (int i = 0; i < n; i++)
            if (s[i] == '0')
                p.push_back(i + 1);

        cout << p.size() << "\n";
        for (int i = 0; i < (int)p.size(); i++)
            cout << p[i] << (i + 1 == p.size() ? '\n' : ' ');
    }
    return 0;
}
