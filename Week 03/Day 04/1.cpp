#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;

    set<int> st{0, x};
    multiset<int> ml{x};

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;

        auto it = st.upper_bound(p);
        int right = *it;
        int left = *prev(it);

        ml.erase(ml.find(right - left));
        ml.insert(p - left);
        ml.insert(right - p);

        st.insert(p);

        cout << *ml.rbegin() << " ";
    }
    return 0;
}