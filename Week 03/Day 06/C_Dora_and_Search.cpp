#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool found = false;
        int l, r;

        for (int i = 0; i < n - 2; i++)
        {
            if ((a[i] < a[i + 1] && a[i + 1] > a[i + 2]) || (a[i] > a[i + 1] && a[i + 1] < a[i + 2]))
            {
                found = true;
                l = i + 1; // Convert to 1-based indexing
                r = i + 3;
                break;
            }
        }

        if (found)
        {
            cout << l << " " << r << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}