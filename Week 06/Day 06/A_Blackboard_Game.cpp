#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "ABloibc e";
    long long n;

    vector<long long> arr;
    int t;
    cin >> t;

    while (cin >> n)
    {
        int start = (n % 4 < 1) ? 1 : 0;
        string out = "";
        for (int i = start; i < (int)s.size(); i += 2)
            out += s[i];
        cout << out << "\n";
    }
    return 0;
}
