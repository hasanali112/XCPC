#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<long long, null_type, less_equal<long long>,
             rb_tree_tag, tree_order_statistics_node_update>
    ost;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ost t;

    for (int i = 0; i < k; i++)
        t.insert(a[i]);

    int mid = (k - 1) / 2;

    cout << *t.find_by_order(mid);

    for (int i = k; i < n; i++)
    {
        t.insert(a[i]);
        t.erase(t.find_by_order(t.order_of_key(a[i - k])));

        cout << " " << *t.find_by_order(mid);
    }

    cout << "\n";
    return 0;
}
