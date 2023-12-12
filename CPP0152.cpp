#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, m;
        cin >> a >> m;
        int check = 0;
        for (int i = 0; i < m; i++) {
            if (a * i % m == 1) {
                cout << i << endl;
                check = 1;
                break;
            }
        }
        if (!check)
            cout << -1 << endl;
    }
    return 0;
}