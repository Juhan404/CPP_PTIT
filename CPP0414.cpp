#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int cnt[10];

void ts(int n) {
    while (n) {
        ++cnt[n % 10];
        n /= 10;
    }
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            ts(a[i]);
        }
        for (int i = 0; i < 10; i++)
            if (cnt[i])
                cout << i << ' ';
        for (int i = 0; i < 10; i++)
            cnt[i] = 0;
        cout << endl;
    }
    return 0;
}