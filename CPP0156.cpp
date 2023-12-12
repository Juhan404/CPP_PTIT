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
    ll b, p;
    cin >> b >> p;
    ll cnt = 1;
    if (b % p == 0)
        cout << (b / p) * 2 << endl;
    else if ((b + 1) % p == 0) {
        ++cnt;
        b -= b % p;
        cout << cnt + (b / p) * 2 << endl;
    }
    else
        cout << cnt + (b / p) * 2 << endl;
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