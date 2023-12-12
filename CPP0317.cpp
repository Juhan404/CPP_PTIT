#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

bool tn(string s) {
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i])
            return 0;
    }
    return 1;
}

bool sc(string s) {
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] - '0') & 1)
            return 0;
    }
    return 1;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        if (tn(s) && sc(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}