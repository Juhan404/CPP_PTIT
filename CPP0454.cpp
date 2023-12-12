#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
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
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);
        bool check = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ll x = 1ll * a[i] * a[i] + 1ll * a[j] * a[j];
                if (binary_search(a + j + 1, a + n, sqrt(x))) {
                    cout << "YES\n";
                    check = 1;
                    break;
                }
            }
            if (check) {
                break;
            }
        }
        if (!check)
            cout << "NO\n";
    }
    return 0;
}