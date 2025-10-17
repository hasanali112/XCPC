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

        if (a == b)
        {
            cout << 0 << "\n"; // কোনো অপারেশন লাগবে না
        }
        else
        {
            int x = a ^ b; // XOR difference

            if (x <= a)
            {
                cout << 1 << "\n"
                     << x << "\n"; // এক ধাপেই সম্ভব
            }
            else
            {
                // দুই ধাপে করব: প্রথমে a^x1 = কিছু, পরে fix করা
                cout << 2 << "\n"
                     << x << " " << (a ^ x ^ b) << "\n";
            }
        }
    }

    return 0;
}
