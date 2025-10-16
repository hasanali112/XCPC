#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    set<string> st;
    vector<string> v(t);

    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
    }

    vector<string> ans;

    for (int i = t - 1; i >= 0; i--)
    {
        if (st.find(v[i]) == st.end())
        {
            ans.push_back(v[i]);
            st.insert(v[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}