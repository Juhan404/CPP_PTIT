#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

ll tohop[1005][1005];

void sang() {
    for (int i = 0; i < 1005; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 1)
                tohop[i][j] = i;
            else if (j == i || j == 0)
                tohop[i][j] = 1;
            else
                tohop[i][j] = ((tohop[i - 1][j - 1] % mod) + (tohop[i - 1][j] % mod)) % mod;
        }
    }
}

int main() {
    fastsync();
    sang();
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;
        cout << tohop[n][r] << endl;
    }
    return 0;
}