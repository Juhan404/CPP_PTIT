#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        ll b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                a[i] *= b[i + 1];
            }
            else if (i == n - 1) {
                a[i] *= b[i - 1];
            }
            else {
                a[i] = b[i - 1] * b[i + 1];
            }
        }
        for (ll x : a)
            cout << x << ' ';
        cout << endl;
    }
    return 0;
}