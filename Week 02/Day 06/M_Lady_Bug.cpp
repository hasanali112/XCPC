#include <iostream>
#include <vector>
#include <string>
#include <numeric>

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
        string a, b;
        cin >> a >> b;
        int pos1 = 0;
        int pos2 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                pos1++;
                if (a[i] == '0')
                {
                    pos2++;
                }
            }
            else
            {
                if (b[i] == '0')
                {
                    pos2++;
                }
            }
        }

        // চেইন ২: b[0], a[1], b[2], a[3], ...
        int a_pos_chain2 = 0;
        int zeros_chain2 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 != 0)
            {
                a_pos_chain2++;
                if (a[i] == '0')
                {
                    zeros_chain2++;
                }
            }
            else
            { // b থেকে উপাদান
                if (b[i] == '0')
                {
                    zeros_chain2++;
                }
            }
        }

        bool possible1 = (pos2 >= pos1);
        bool possible2 = (zeros_chain2 >= a_pos_chain2);

        if (possible1 && possible2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}