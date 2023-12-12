#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

ll fibo(int n) {
    if (n == 1)
        return 1;
    ll f0 = 0, f1 = 1, fn, cnt = 1;
    while (1) {
        fn = f0 % mod + f1 % mod;
        ++cnt;
        if (cnt == n)
            return fn % mod;
        f0 = f1 % mod;
        f1 = fn % mod;
    }
    return 0;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << fibo(n) << endl;
    }
    return 0;
}
