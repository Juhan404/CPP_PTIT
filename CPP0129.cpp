#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        ll res = 0;
        for (int i = p; i <= n; i *= p) {
            res += n / i;
        }
        cout << res << endl;
    }
    return 0;
}