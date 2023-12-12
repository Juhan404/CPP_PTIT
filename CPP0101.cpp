#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll res = 1ll * n * (n + 1) / 2;
        cout << res << endl;
    }
    return 0;
}