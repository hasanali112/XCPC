#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    set<long long> st;
    long long ans = 0;
    int left = 0;

    for (int right = 0; right < n; right++)
    {
        while (st.count(a[right]))
        {
            st.erase(a[left]);
            left++;
        }

        st.insert(a[right]);
        ans = max(ans, (long long)st.size());
    }

    cout << ans << "\n";
    return 0;
}
