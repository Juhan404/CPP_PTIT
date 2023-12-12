#include <bits/stdc++.h>
#define MAX 10005
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int cnt[10005];

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= n * n; i++) {
            int tmp;
            cin >> tmp;
            ++cnt[tmp];
        }
        int pos = 0;
        for (int i = 0; i < MAX; i++) {
            if (cnt[i]) {
                while (cnt[i]--) {
                    ++pos;
                    if (pos == k) {
                        cout << i << endl;
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < MAX; i++) {
            cnt[i] = 0;
        }
    }
    return 0;
}