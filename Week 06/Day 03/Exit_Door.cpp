#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n + 1);
        vector<int> pos(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            pos[v[i]] = i; 
        }

        long long total = 0;
        set<int> st;

        for (int i = 1; i <= n; i++) {
            st.insert(i);
        }
    
        for (int person = n; person >= 1; person--) {
            int seat = pos[person];
            st.insert(seat);

            auto it = st.find(seat);
            int left = distance(st.begin(), it);
            int right = (int)st.size() - left - 1;
            total += min(left, right);

            st.erase(it);
        }

        cout << total << "\n";
    }
    return 0;
}
