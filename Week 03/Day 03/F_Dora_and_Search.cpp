#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // test case সংখ্যা

    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<int, vector<int>, greater<int>> pq; // Min-Heap

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq.push(x);
        }

        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            int merged = (a + b + 1) / 2; // ceil((a+b)/2)
            pq.push(merged);
        }

        cout << pq.top() << endl;
    }
    return 0;
}