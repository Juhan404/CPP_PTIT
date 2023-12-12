#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

void run_case() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int m;
    cin >> m;
    int b[m][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] *= b[i % m][j % m];
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    fastsync();
    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; ++test) {
        run_case();
    }
    return 0;
}