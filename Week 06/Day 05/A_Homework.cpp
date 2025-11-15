#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    if (!getline(cin, line))
        return 0;
    int T = stoi(line);

    for (int tc = 0; tc < T; ++tc)
    {
        string tmp;

        getline(cin, tmp);
        string a;
        getline(cin, a);
        getline(cin, tmp);
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        int L = min(s1.size(), s2.size());
        for (int i = 0; i < L; ++i)
        {
            char x = s1[i];
            char y = s2[i];
            string xs(1, x);
            if (y > 'D')
                a = xs + a;
            else
                a = a + xs;
        }

        cout << a << '\n';
    }

    return 0;
}
