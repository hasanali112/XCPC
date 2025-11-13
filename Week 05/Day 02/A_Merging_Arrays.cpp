#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    vector<int> v(a + b);
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }
    for (int i = a; i < a + b; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}