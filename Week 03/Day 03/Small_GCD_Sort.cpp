#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
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
        vector<pair<int, int>> a;
        for (int i = 1; i <= n; i++)
        {
            int g = __gcd(i, n);
            a.push_back({g, i});
        }

        sort(a.begin(), a.end(), compare);

        for (auto i : a)
        {
            cout << i.second << " ";
        }
        cout << endl;
    }
    return 0;
}