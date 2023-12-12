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
    int t;
    cin >> t;
    cin.ignore(1);
    while (t--) {
        map<char, int> cnt;
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            ++cnt[s[i]];
        }
        for (int i = 0; i < s.length(); i++) {
            if (cnt[s[i]]) {
                cout << s[i] << cnt[s[i]];
                cnt[s[i]] = 0;
            }
        }
        cout << endl;
    }
    return 0;
}