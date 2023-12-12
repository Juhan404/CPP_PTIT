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
        string str;
        map<char, int> cnt;
        getline(cin, str);
        for (int i = 0; i < str.length(); i++) {
            ++cnt[str[i]];
        }
        int fmax = INT_MIN;
        for (auto x : cnt) {
            fmax = max(fmax, x.second);
        }
        int s = str.length();
        if (s & 1) {
            if (fmax <= s / 2 + 1) {
                cout << 1 << endl;
            }
            else
                cout << 0 << endl;
        }
        else if (s == 0) {
            cout << 1 << endl;
        }
        else {
            if (fmax <= s / 2) {
                cout << 1 << endl;
            }
            else
                cout << 0 << endl;
        }
    }
    return 0;
}