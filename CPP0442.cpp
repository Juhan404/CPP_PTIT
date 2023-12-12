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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a) {
            cin >> x;
            ++cnt[x];
        }
        if (cnt[k])
            cout << 1 << endl;
        else
            cout << -1 << endl;
        for (int i = 0; i < MAX; i++)
            cnt[i] = 0;
    }
    return 0;
}