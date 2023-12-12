#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int a[n], b[n], res = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            res += a[i];
            b[i] = res;
        }
        while (d--) {
            int s, q;
            cin >> s >> q;
            if (s == 1)
                cout << b[q - 1] << endl;
            else
                cout << b[q - 1] - b[s - 2] << endl;
        }
    }
    return 0;
}