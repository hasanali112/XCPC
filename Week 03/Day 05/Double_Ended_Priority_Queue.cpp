#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    multiset<int> ms;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int val;
            cin >> val;
            ms.insert(val);
        }
        else if (cmd == 1)
        {
            if (!ms.empty())
            {
                int min_ele = *ms.begin();
                cout << min_ele << "\n";
                auto it = ms.find(min_ele);
                ms.erase(it);
            }
        }
        else if (cmd == 2)
        {
            if (!ms.empty())
            {
                int max_ele = *ms.rbegin();
                cout << max_ele << "\n";
                auto it = ms.find(max_ele);
                ms.erase(it);
            }
        }
    }

    return 0;
}