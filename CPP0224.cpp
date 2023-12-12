#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int posx[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int posy[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

void canh(int i, int j, int a[][105], int n, int m) {
    a[i][j] = 0;
    for (int t = 0; t < 9; t++) {
        int canhx = i + posx[t], canhy = j + posy[t];
        if (canhx >= 0 && canhx < n && canhy >= 0 && canhy < m && a[canhx][canhy]) {
            canh(canhx, canhy, a, n, m);
        }
    }
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[105][105];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j]) {
                    ++cnt;
                    canh(i, j, a, n, m);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}