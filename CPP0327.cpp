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
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        int u = 0, tong = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (u == 5)
                u = 1;
            if (s[i] == '1') {
                int tmp = pow(2, u);
                tong += tmp % 10;
            }
            ++u;
        }
        if (tong % 5 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}