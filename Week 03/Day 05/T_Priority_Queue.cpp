#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<priority_queue<int>> v(n);

    while (q--)
    {
        int cmd, pos;
        cin >> cmd >> pos;
        if (cmd == 0)
        {
            int x;
            cin >> x;
            v[pos].push(x);
        }
        else if (cmd == 1)
        {
            if (!v[pos].empty())
            {
                cout << v[pos].top() << "\n";
            }
        }
        else if (cmd == 2)
        {
            if (!v[pos].empty())
            {
                v[pos].pop();
            }
        }
    }

    return 0;
}