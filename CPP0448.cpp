#include <bits/stdc++.h>
#define MAX 1000005
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int cnt[1000005];

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int &k : a) {
            cin >> k;
            ++cnt[k];
        }
        if (cnt[x])
            cout << cnt[x] << endl;
        else
            cout << -1 << endl;
        for (int i = 0; i < MAX; i++)
            cnt[i] = 0;
    }
    return 0;
}
