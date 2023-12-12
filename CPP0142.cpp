#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

bool nt(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int euler(ll n) {
    ll ans = n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ans = ans - ans / i;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        ans = ans - ans / n;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << nt(euler(n)) << endl;
    }
    return 0;
}