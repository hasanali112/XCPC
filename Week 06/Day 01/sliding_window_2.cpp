// Given a string S of size N consisting of the characters 0, 1 and 2, the task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.length();
    bool zero = false, one = false, two = false;

    int i = 0, j = 0;
    int min_len = n + 1;
    while (j < n)
    {
        if (s[j] == '0')
            zero = true;
        if (s[j] == '1')
            one = true;
        if (s[j] == '2')
            two = true;

        while (zero && one && two)
        {
            min_len = min(min_len, j - i + 1);
            if (s[i] == '0')
                zero = false;
            if (s[i] == '1')
                one = false;
            if (s[i] == '2')
                two = false;
            i++;
        }
        j++;
    }

    if (min_len == n + 1)
        cout << -1 << endl;
    else
        cout << min_len << endl;

    return 0;
}