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
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
                i += 2;
            else
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}