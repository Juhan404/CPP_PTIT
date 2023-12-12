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
        int tong = 0;
        for (int i = 0; i < s.length(); i++) {
            if ((i + 1) & 1) {
                tong += s[i] - '0';
            }
            else {
                tong -= s[i] - '0';
            }
        }
        if (tong % 11 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}