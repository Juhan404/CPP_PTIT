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
        int cnt = 0;
        for (ll &x : a) {
            cin >> x;
            if (x == 0)
                ++cnt;
        }
        for (ll x : a) {
            if (x != 0)
                cout << x << ' ';
        }
        while (cnt--) {
            cout << 0 << ' ';
        }
        cout << endl;
    }
    return 0;
}