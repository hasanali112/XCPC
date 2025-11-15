#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    set<int> s;
    for (int i = 1; i <= n; i++)
        s.insert(i);

    vector<int> ans;
    long long idx = 0;

    while (!s.empty())
    {
        int sz = s.size();
        idx = (idx + k) % sz;
        auto it = next(s.begin(), idx);

        ans.push_back(*it);
        s.erase(it);
    }

    for (int x : ans)
        cout << x << " ";
    return 0;
}
