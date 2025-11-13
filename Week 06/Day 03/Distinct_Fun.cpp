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
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        int val = 0;
        set<int> st;
        for (int x : a)
        {
            if (st.count(x))
            {
                val++;
                st.clear();
            }
            st.insert(x);
        }
        cout << val << "\n";
    }
    return 0;
}