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
    int m, s;
    cin >> m >> s;
    if (s > 9 * m || (s == 0 && m >= 2)) {
        cout << -1 << ' ' << -1;
        return 0;
    }
    int big[m], small[m];
    int tmp = s;
    for (int i = 0; i < m; i++) {
        if (s >= 9) {
            big[i] = 9;
            s -= 9;
        }
        else {
            big[i] = s;
            s = 0;
        }
    }
    --tmp;
    for (int i = m - 1; i > 0; i--) {
        if (tmp >= 9) {
            small[i] = 9;
            tmp -= 9;
        }
        else {
            small[i] = tmp;
            tmp = 0;
        }
    }
    small[0] = tmp + 1;
    for (int i = 0; i < m; i++) {
        cout << small[i];
    }
    cout << ' ';
    for (int i = 0; i < m; i++) {
        cout << big[i];
    }
    return 0;
}