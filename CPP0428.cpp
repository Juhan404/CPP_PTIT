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
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;
        int a[k + n];
        for (int &x : a)
            cin >> x;
        sort(a, a + k + n);
        for (int x : a)
            cout << x << ' ';
        cout << endl;
    }
    return 0;
}