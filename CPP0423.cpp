#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

const int MOD = 1e9 + 7;
const int MAX = 1e7 + 7;

void run_case() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;
    int t1 = 0, t2 = 0;
    for (int x : a) {
        if (x <= k)
            ++t1;
    }
    for (int i = 0; i < t1; ++i) {
        if (a[i] > k)
            ++t2;
    }
    int ans = t2, i = 0, j = t1;
    while (j < n) {
        if (a[i] > k)
            --t2;
        if (a[j] > k)
            ++t2;
        ans = min(ans, t2);
        ++i;
        ++j;
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
