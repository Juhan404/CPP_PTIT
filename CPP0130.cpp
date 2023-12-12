#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

void pt(ll n) {
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            cout << i << ' ';
            n /= i;
        }
        if (n == 1)
            cout << endl;
    }
    if (n > 1)
        cout << n << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        pt(n);
    }
    return 0;
}