#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

ll bigmod(string s, ll m) {
    ll res = 0;
    for (char x : s) {
        res = res * 10 + x - '0';
        res %= m;
    }
    return res;
}

ll ltnp(ll a, ll b, ll m) {
    ll res = 1;
    while (b) {
        if (b % 2) {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        string s;
        ll n, m;
        cin >> s >> n >> m;
        ll a = bigmod(s, m);
        cout << ltnp(a, n, m) << endl;
    }
    return 0;
}