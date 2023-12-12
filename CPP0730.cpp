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
    ll a[n];
    for (ll &x : a)
        cin >> x;
    ll fmax = INT_MIN, sum = 0;
    for (ll x : a) {
        sum += x;
        fmax = max(sum, fmax);
        if (sum < 0)
            sum = 0;
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
