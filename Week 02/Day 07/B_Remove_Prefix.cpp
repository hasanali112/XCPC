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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        set<int> st;
        int sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (st.count(v[i]))
            {
                break;
            }
            st.insert(v[i]);
            sum++;
        }

        cout << n - sum << endl;
    }

    return 0;
}