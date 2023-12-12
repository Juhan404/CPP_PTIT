#include <bits/stdc++.h>
#define MAX 1000005
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
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int u = 0;
        for (int i = 0; i < n; i += 2) {
            b[i] = a[u];
            ++u;
        }
        for (int i = 1; i < n; i += 2) {
            b[i] = a[u];
            ++u;
        }
        for (int x : b) {
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}