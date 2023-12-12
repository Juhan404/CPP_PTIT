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
        int a[n], max_val = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            max_val = max(max_val, a[i]);
        }
        cout << max_val << endl;
    }
    return 0;
}