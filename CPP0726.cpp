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

ll bigMUL(ll a, ll b, ll c) {
    if (b == 0)
        return 0;
    ll x = bigMUL(a, b / 2, c) % c;
    if (b & 1)
        return ((x + x) % c + a % c) % c;
    else
        return (x + x) % c;
}

void run_case() {
    ll a, b, c;
    cin >> a >> b >> c;
    cout << bigMUL(a, b, c) << endl;
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