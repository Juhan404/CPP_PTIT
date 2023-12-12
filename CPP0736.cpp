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
    int n, x;
    cin >> n >> x;
    ll a[n];
    for (ll &x : a)
        cin >> x;
    ll l = 0;
    ll sum = 0, ans = INT_MAX;
    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum > x) {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            ++l;
        }
    }
    if (ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
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