#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

ll powmod(ll x, ll y, ll p) {
    ll res = 1;
    while (y) {
        if (y & 1) {
            res *= x;
            res %= p;
        }
        x *= x;
        x %= p;
        y /= 2;
    }
    return res;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        ll x, y, p;
        cin >> x >> y >> p;
        cout << powmod(x, y, p) << endl;
    }
    return 0;
}