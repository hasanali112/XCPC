#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());

    vector<int> ans(N + 1, 0);

    // First element
    ans[arr[0].second] = -1;
    // Last element
    ans[arr[N - 1].second] = -1;

    for (int k = 1; k < N - 1; k++)
    {
        int L = (arr[k - 1].first + arr[k].first) / 2 + 1;
        int U = (arr[k].first + arr[k + 1].first) / 2;
        int count = max(0, U - L + 1);
        ans[arr[k].second] = count;
    }

    for (int i = 1; i <= N; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}