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
    int M[1000];
    for (int i = 0; i < n * n; i++) {
        cin >> M[i];
    }
    sort(M, M + n * n);
    int N[100][100];
    int t = n, g = 0;
    for (int i = 1; i <= n / 2 + 1; i++) {
        for (int j = i; j <= t; j++)
            N[i][j] = M[g++];
        for (int j = i + 1; j <= t; j++)
            N[j][t] = M[g++];
        for (int j = t - 1; j >= i; j--)
            N[t][j] = M[g++];
        for (int j = t - 1; j > i; j--)
            N[j][i] = M[g++];
        t--;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << N[i][j] << " ";
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
