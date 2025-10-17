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
        if (n == 2)
        {
            cout << -1 << "\n";
        }
        else if (n == 3)
        {
            cout << "1 3\n";
            cout << "2 3\n";
        }
        else if (n == 4)
        {
            cout << "1 2\n";
            cout << "3 1\n";
            cout << "4 1\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}
