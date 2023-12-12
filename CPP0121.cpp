#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        ll lcm = 1ll * a / __gcd(a, b) * b;
        cout << lcm << ' ' << __gcd(a, b) << endl;
    }
    return 0;
}