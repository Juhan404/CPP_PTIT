#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

void run_case() {
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
        cin >> x;
    int k, x;
    cin >> k >> x;
    int find = lower_bound(a, a + n, x) - a;
    for (int i = find - k / 2; i < find; ++i) {
        if (i >= 0)
            cout << a[i] << ' ';
        else
            cout << 0 << ' ';
    }
    for (int i = find + 1; i <= find + k / 2; ++i) {
        if (i < n)
            cout << a[i] << ' ';
        else
            cout << 0 << ' ';
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
