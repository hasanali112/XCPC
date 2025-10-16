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
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> v(a);

        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        int rank = a + 1;

        for (int i = 0; i <= c; i++)
        {
            int score = b + i * 100;
            int sum = 0;

            for (int j = i; j < a; j++)
            {
                if (v[j] > score)
                {
                    sum++;
                }
            }

            rank = min(rank, sum + 1);
        }

        cout << rank << endl;
    }
    return 0;
}