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
        ll k;
        cin >> n >> k;
        int tong = 0;
        for (int i = 1; i <= n; i++) {
            tong += i % k;
        }
        cout << tong << endl;
    }
    return 0;
}