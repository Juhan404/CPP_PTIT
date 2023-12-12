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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        int cnt = 0, l = 0, r = n - 1;
        while (l <= r) {
            if (a[l] == a[r]) {
                ++l;
                --r;
            }
            else if (a[l] < a[r]) {
                ++l;
                a[l] += a[l - 1];
                ++cnt;
            }
            else {
                --r;
                a[r] += a[r + 1];
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}