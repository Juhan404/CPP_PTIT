#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

bool check(string s) {
    ll tong = 0;
    for (int i = 0; i < s.length(); i++) {
        tong += s[i] - '0';
    }
    while (tong >= 10) {
        ll tmp = 0;
        while (tong) {
            tmp += tong % 10;
            tong /= 10;
        }
        tong = tmp;
    }
    if (tong == 9)
        return 1;
    else
        return 0;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    cin.ignore(1);
    while (t--) {
        string s;
        getline(cin, s);
        cout << check(s) << endl;
    }
    return 0;
}