#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

bool cmp(int x, int y) {
    return x > y;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n, cmp);
        int pos = 0;
        for (int i = 0; i < k; i++) {
            cout << a[pos + i] << ' ';
        }
        cout << endl;
    }
    return 0;
}