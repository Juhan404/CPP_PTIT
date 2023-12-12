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
        int n, m;
        cin >> n >> m;
        int a[n], b[m], min_val = INT_MAX, max_val = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            max_val = max(max_val, a[i]);
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            min_val = min(min_val, b[i]);
        }
        cout << 1ll * min_val * max_val << endl;
    }
    return 0;
}