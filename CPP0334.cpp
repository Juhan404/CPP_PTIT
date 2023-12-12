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
    cin.ignore(1);
    while (t--) {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (!isdigit(s[i])) {
                s[i] = ' ';
            }
        }
        stringstream ss(s);
        string str;
        ll tong = 0;
        while (ss >> str) {
            ll tmp = stoll(str);
            tong += tmp;
        }
        cout << tong << endl;
    }
    return 0;
}