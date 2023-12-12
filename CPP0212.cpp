#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll tong = 0, ans = 1;
        for (int i = n - 1; i >= 0; i--) {
            tong += a[i] * ans;
            tong %= MOD;
            ans *= x;
            ans %= MOD;
        }
        cout << tong << endl;
    }
    return 0;
}