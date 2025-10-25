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
        vector<long long> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        priority_queue<long long> pq;
        long long a = 0;

        for (int i = 0; i < n; ++i)
        {
            if (v[i] > 0)
            {
                pq.push(v[i]);
            }
            else
            {
                if (!pq.empty())
                {
                    a += pq.top();
                    pq.pop();
                }
            }
        }

        cout << a << "\n";
    }

    return 0;
}
