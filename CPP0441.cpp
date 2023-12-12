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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        bool check = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == k) {
                cout << i + 1 << endl;
                check = 1;
                break;
            }
        }
        if (!check)
            cout << -1 << endl;
    }
    return 0;
}