#include <bits/stdc++.h>
using namespace std;

int maxCoolPartition(int n, vector<int> &a)
{
    // Count occurrences of each element after each position
    vector<map<int, int>> afterCount(n);

    // Build afterCount from right to left
    for (int i = n - 2; i >= 0; i--)
    {
        afterCount[i] = afterCount[i + 1];
        afterCount[i][a[i + 1]]++;
    }

    int segments = 0;
    set<int> currentSet;

    for (int i = 0; i < n; i++)
    {
        currentSet.insert(a[i]);

        // Check if we can make a cut here
        if (i == n - 1)
        {
            segments++;
            break;
        }

        // Check if all elements in currentSet appear after position i
        bool canCut = true;
        for (int elem : currentSet)
        {
            if (afterCount[i].find(elem) == afterCount[i].end() ||
                afterCount[i][elem] == 0)
            {
                canCut = false;
                break;
            }
        }

        if (canCut)
        {
            segments++;
            currentSet.clear();
        }
    }

    return segments;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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

        cout << maxCoolPartition(n, a) << "\n";
    }

    return 0;
}