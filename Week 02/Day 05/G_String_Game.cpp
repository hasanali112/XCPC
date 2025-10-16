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
        int N;
        cin >> N;
        string S;
        cin >> S;
        int zeros = 0;
        for (char c : S)
            if (c == '0')
                ++zeros;
        int ones = N - zeros;
        int moves = min(zeros, ones);
        if (moves % 2)
            cout << "Zlatan" << endl;
        else
            cout << "Ramos" << endl;
    }
    return 0;
}
