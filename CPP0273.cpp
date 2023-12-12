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
        ll tong[n], tmp = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tmp += a[i];
            tong[i] = tmp;
        }
        bool check = 0;
        for (int i = 1; i < n - 1; i++) {
            if (tong[i - 1] == tong[n - 1] - tong[i]) {
                cout << i + 1 << endl;
                check = 1;
                break;
            }
        }
        if (!check)
            cout << -1 << endl;
    }
    return 0;
}