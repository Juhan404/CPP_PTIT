#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int a[10];

bool check(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i]))
            return 1;
    }
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
        if (s[0] == '0' || check(s))
            cout << "INVALID\n";
        else {
            for (int i = 0; i < s.length(); i++) {
                ++a[s[i] - '0'];
            }
            bool check = 1;
            for (int i = 0; i < 10; i++) {
                if (a[i] == 0) {
                    cout << "NO" << endl;
                    check = 0;
                    break;
                }
            }
            if (check) {
                cout << "YES\n";
            }
        }
        for (int i = 0; i < 10; i++) {
            a[i] = 0;
        }
    }
    return 0;
}