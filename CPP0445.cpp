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
        int a[n], min_val = INT_MAX, min_val2 = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            min_val = min(min_val, a[i]);
        }
        for (int i = 0; i < n; i++) {
            if (a[i] != min_val) {
                min_val2 = min(min_val2, a[i]);
            }
        }
        if (min_val2 == INT_MAX)
            cout << -1 << endl;
        else {
            cout << min_val << ' ' << min_val2 << endl;
        }
    }
    return 0;
}