#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        auto it = upper_bound(v.begin(), v.end(), k);
        if (it == v.end())
        {
            v.push_back(k);
        }
        else
        {
            *it = k;
        }
    }

    cout << v.size() << endl;
    return 0;
}