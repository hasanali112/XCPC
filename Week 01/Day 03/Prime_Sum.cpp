#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int count1 = 0, count2 = 0, count3 = 0;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) count1++;
            else if (x == 2) count2++;
            else count3++;
        }
        
        long long result = 0;
        
        if (count1 >= 2) {
            result += (long long)count1 * (count1 - 1) / 2;
        }
        
        result += (long long)count1 * count2;
        
        result += (long long)count2 * count3;
        
        cout << result << endl;
    }
    
    return 0;
}