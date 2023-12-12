#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int hieu = INT_MIN;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                hieu = max(hieu, a[j] - a[i]);
            }
        }
        if (hieu > 0) {
            cout << hieu << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}