#include <bits/stdc++.h>
#define MAX 10000005
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int cnt[10000005];

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < MAX && a[i] >= 0)
                ++cnt[a[i]];
        }
        for (int i = 0; i < n; i++) {
            if (cnt[i])
                cout << i << ' ';
            else
                cout << -1 << ' ';
        }
        for (int i = 0; i < MAX; i++)
            cnt[i] = 0;
        cout << endl;
    }
    return 0;
}