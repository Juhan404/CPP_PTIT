#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

// #include <debug.h>
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

void run_case() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (i && a[i][j])
                a[i][j] = a[i - 1][j] + 1;
        }
    }
    for (int i = 0; i < n; i++) {
        vector<int> v;
        for (int j = 0; j < m; j++) {
            v.push_back(a[i][j]);
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int j = 0; j < m; j++) {
            a[i][j] = v[j];
        }
    }
    int res = -1;
    for (int i = 0; i < n; i++) {
        int ans = 1;
        for (int j = 0; j < m; j++) {
            int temp = a[i][j] * ans;
            ++ans;
            res = max(res, temp);
        }
    }
    cout << res << endl;
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