#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    set<int> st;

    while (t--)
    {
        int cmd, val;
        cin >> cmd >> val;

        if (cmd == 1)
        {
            st.insert(val);
        }
        else if (cmd == 2)
        {
            st.erase(val);
        }
        else if (cmd == 3)
        {
            if (st.find(val) != st.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}