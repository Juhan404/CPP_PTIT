#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

int a[MAX];
int tong[MAX];

void run_case() {
    int n, k, b;
    cin >> n >> k >> b;
    for (int i = 1; i <= n; ++i) {
        a[i] = 1;
    }
    while (b--) {
        int x;
        cin >> x;
        a[x] = 0;
    }
    for (int i = 1; i <= n; ++i) {
        if (i == 0)
            tong[i] = a[i];
        else
            tong[i] = tong[i - 1] + a[i];
    }
    int ans = INT_MAX;
    for (int i = 1; i <= n - k + 1; ++i) {
        if (i == 1)
            ans = min(ans, k - tong[k]);
        else
            ans = min(ans, k - (tong[i + k - 1] - tong[i - 1]));
    }
    cout << ans;
}

int main() {
    fastsync();
    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; ++test) {
        run_case();
    }
    return 0;
}
