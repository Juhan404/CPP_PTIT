#include <bits/stdc++.h>
#define MAX 100005
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int cnt[100005];

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a) {
            cin >> x;
            ++cnt[x];
        }
        bool check = 0;
        for (int i = 0; i < n; i++) {
            if (cnt[abs(k - a[i])]) {
                cout << 1 << endl;
                check = 1;
                break;
            }
        }
        if (!check)
            cout << -1 << endl;
        for (int i = 0; i < MAX; i++)
            cnt[i] = 0;
    }
    return 0;
}