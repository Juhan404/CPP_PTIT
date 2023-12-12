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
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);
        int res = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[i - 1])
                res += a[i] - a[i - 1] - 1;
        }
        cout << res << endl;
    }
    return 0;
}