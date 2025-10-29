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
        int a, b;
        cin >> a >> b;
        if (a <= b)
        {
            cout << "0" << endl;
        }
        else
        {
            int pr = a - b;
            cout << pr * (pr + 1) / 2 << endl;
        }
    }

    return 0;
}