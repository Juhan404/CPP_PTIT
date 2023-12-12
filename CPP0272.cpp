#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

ll powmod(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) {
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return res;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        ll tich = 1;
        for (int &x : a) {
            cin >> x;
            tich = ((tich % mod) * (x % mod)) % mod;
        }
        int gcd = a[0];
        for (int i = 1; i < n; i++) {
            gcd = __gcd(gcd, a[i]);
        }
        cout << powmod(tich, gcd) << endl;
    }
    return 0;
}