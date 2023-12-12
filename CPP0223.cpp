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
    int m, n;
    cin >> m >> n;
    int M[100][100];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> M[i][j];
    int a = m, b = n;
    int N[10000];
    int g = 0;
    for (int i = 0; i <= a / 2; i++) {
        for (int j = i; j < n; j++)
            N[g++] = M[i][j];
        for (int j = i + 1; j < m; j++)
            N[g++] = M[j][n - 1];
        for (int j = n - 2; j >= i; j--)
            N[g++] = M[m - 1][j];
        for (int j = m - 2; j > i; j--)
            N[g++] = M[j][i];
        m--;
        n--;
    }
    for (int i = 0; i < a * b; i++)
        cout << N[i] << " ";
    cout << endl;
}

int main() {
    fastsync();
    int Test;
    cin >> Test;
    for (int test = 1; test <= Test; ++test) {
        run_case();
    }
    return 0;
}
