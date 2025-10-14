#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<char> ans;
    for(auto it: s)
    {
     if (it == '<') {
            if (!ans.empty()) {
                ans.pop_back();
            }
        } else {
            ans.push_back(it);
        }
    }

    for (auto it : ans) {
        cout << it;
    }
    
    return 0;
}