#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int cnt[300];

int main() {
    fastsync();
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string c;
        getline(cin, c);
        for (int i = 0; i < c.length(); i++) {
            ++cnt[c[i]];
        }
        ll ketqua = c.length();
        for (int i = 0; i < 300; i++) {
            ketqua += 1ll * cnt[i] * (cnt[i] - 1) / 2;
        }
        cout << ketqua << endl;
        for (int i = 0; i < 300; i++) {
            cnt[i] = 0;
        }
    }
    return 0;
}