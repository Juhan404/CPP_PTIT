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
        string s;
        ll n;
        cin >> n >> s;
        ll res = 0;
        for (char x : s) {
            res = res * 10 + x - '0';
            res %= n;
        }
        if (res == 0)
            cout << n << endl;
        else
            cout << __gcd(res, n) << endl;
    }
    return 0;
}