#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    multiset<int> s;
    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    for (int i = 0; i < y; i++)
    {
        int a;
        cin >> a;

        auto it = s.upper_bound(a);
        if (it == s.begin())
        {
            cout << "-1" << endl;
        }
        else
        {
            it--;
            cout << *it << endl;
            s.erase(it);
        }
    }
    return 0;
}