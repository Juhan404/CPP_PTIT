#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, x, y;
        cin >> a >> x >> y;
        ll res = __gcd(x, y);
        for (ll i = 1; i <= res; i++) {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}