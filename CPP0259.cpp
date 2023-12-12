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
    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m], b[m][p];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cin >> b[i][j];
        }
    }
    int c[n][p];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            int tmp = 0;
            for (int k = 0; k < m; k++) {
                tmp += a[i][k] * b[k][j];
            }
            c[i][j] = tmp;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}