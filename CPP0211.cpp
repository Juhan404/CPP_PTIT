#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

void run_case() {
    int n;
    cin >> n;
    int a[n];
    vector<int> v(n + 1, INT_MIN);
    for (int &x : a)
        cin >> x;
    for (int i = n - 1; i >= 0; --i) {
        v[i] = max(a[i], v[i + 1]);
    }
    int ans = -1;
    for (int i = 0; i < n; ++i) {
        int l = i + 1, r = n - 1, fmax = i;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a[i] <= v[mid]) {
                fmax = max(fmax, mid);
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        ans = max(ans, fmax - i);
    }
    cout << ans << endl;
}

int main() {
    fastsync();
    int Test;
    cin >> Test;
    for (int test = 1; test <= Test; ++test) {
        run_case();
    }
    return 0;
}
