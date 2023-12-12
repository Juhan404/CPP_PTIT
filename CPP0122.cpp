#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll res = 1;
        for (int i = 1; i <= n; i++) {
            res = lcm(res, i);
        }
        cout << res << endl;
    }
    return 0;
}