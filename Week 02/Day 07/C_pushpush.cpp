#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        if ((n % 2 == 1 && i % 2 == 0) || (n % 2 == 0 && i % 2 == 1))
        {
            dq.push_front(v[i]);
        }
        else
        {
            dq.push_back(v[i]);
        }
    }

    for (auto i : dq)
    {
        cout << i << " ";
    }

    return 0;
}