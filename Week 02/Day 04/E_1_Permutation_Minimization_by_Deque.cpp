#include <bits/stdc++.h>
using namespace std;
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
        deque<int> dq;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        for (int i = 0; i < n; i++)
        {
            if (dq.empty() || dq.front() > v[i])
            {
                dq.push_front(v[i]);
            }
            else
            {
                dq.push_back(v[i]);
            }
        }

        for (auto x : dq)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}