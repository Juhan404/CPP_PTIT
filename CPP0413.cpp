#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n, cmp);
        for (int i = 0; i < n / 2; i++) {
            cout << a[i] << ' ' << a[n - i - 1] << ' ';
        }
        if (n & 1)
            cout << a[n / 2];
        cout << endl;
    }
    return 0;
}