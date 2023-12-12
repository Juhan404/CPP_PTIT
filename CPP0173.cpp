#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x, y, z, n;
        cin >> x >> y >> z >> n;
        ll bc1 = x / __gcd(x, y) * y;
        ll bc = bc1 / __gcd(bc1, z) * z;
        ll min = pow(10, n - 1), max = pow(10, n) - 1;
        ll ans = (min + bc - 1) / bc * bc;
        if (ans <= max)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}