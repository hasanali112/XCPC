#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    map<string, int> cnt;
    
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        if (cnt[s] > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        cnt[s]++;
    }
    
    
    return 0;
}