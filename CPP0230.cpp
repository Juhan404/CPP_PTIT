#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int main() {
    fastsync();
    int n;
    cin >> n;
    int a[n][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int cnt1 = 0, cnt0 = 0;
        for (int j = 0; j < 3; j++) {
            if (a[i][j])
                ++cnt1;
            else
                ++cnt0;
        }
        if (cnt1 > cnt0)
            ++cnt;
    }
    cout << cnt;
    return 0;
}