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
    char x[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
        for (int j = 0; j < 6; j++) {
            if (s[i] == x[j]) {
                s[i] = ' ';
            }
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            cout << '.' << s[i];
        }
    }
    return 0;
}