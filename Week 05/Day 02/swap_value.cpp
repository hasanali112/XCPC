#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 10;
    int b = 20;
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
    return 0;
}