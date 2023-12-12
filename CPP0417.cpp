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
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                cout << i + 1 << ' ';
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != b[i]) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}