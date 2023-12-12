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
    int n;
    cin >> n;
    ll a[n];
    for (ll &x : a)
        cin >> x;
    ll fmax = INT_MIN;
    for (int i = 0; i < n; i++) {
        ll tich = a[i];
        fmax = max(fmax, tich);
        for (int j = i + 1; j < n; j++) {
            if (a[j] == 0) {
                tich = 1;
                continue;
            }
            tich *= a[j];
            fmax = max(fmax, tich);
        }
    }
    cout << fmax << endl;
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