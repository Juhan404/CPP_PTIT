#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

int sohoanhao(ll n) {
    for (int i = 2; i <= 32; i++) {
        if (prime(i)) {
            ll temp = pow(2, i) - 1;
            if (prime(temp)) {
                ll shh = 1ll * pow(2, i - 1) * (pow(2, i) - 1);
                if (n == shh)
                    return 1;
            }
        }
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << sohoanhao(n) << endl;
    }
    return 0;
}