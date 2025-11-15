#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> lines;
    string s;
    while (getline(cin, s))
        lines.push_back(s);

    for (size_t i = 2; i < lines.size(); i += 2)
    {
        const string &st = lines[i];
        int count0 = count(st.begin(), st.end(), '0');
        int countDash = count(st.begin(), st.end(), '-');
        cout << count0 + (countDash % 2) * 2 << "\n";
    }

    return 0;
}
