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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            auto cuoi = lower_bound(a + i + 1, a + n, k + a[i]);
            cuoi--;
            cnt += cuoi - a - i;
        }
        cout << cnt << endl;
    }
    return 0;
}