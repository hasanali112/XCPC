#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << "2" << "\n";
        if (n == 2)
        {
            cout << "1 2" << "\n";
            continue;
        }
        cout << n - 2 << " " << n << "\n";
        cout << n - 1 << " " << n - 1 << "\n";
        int cur = n - 1;
        for (int i = n - 3; i >= 1; i--)
        {
            cout << cur << " " << i << "\n";
            cur = (cur + i + 1) / 2;
        }
    }
    return 0;
}