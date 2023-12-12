#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

// #include <debug.h>
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

void run_case() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;
    ll tong = 0, l = 0, r = k - 1;
    for (int i = 0; i < k; i++) {
        tong += a[i];
    }
    double tbmax = (double)tong / k;
    for (int i = 1; i <= n - k; i++) {
        tong += a[i + k - 1] - a[i - 1];
        if (1.0 * tong / k > tbmax) {
            tbmax = 1.0 * tong / k;
            l = i;
            r = i + k - 1;
        }
    }
    for (int i = l; i <= r; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main() {
    fastsync();
    int Test;
    cin >> Test;
    for (int test = 1; test <= Test; ++test) {
        run_case();
    }
    return 0;
}