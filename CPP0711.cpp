#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

void start(string &s, int n) {
    for (int i = 0; i < n; i++) {
        s += '0';
    }
}

void gen(string &s, int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            s[i] = '1';
            for (int j = i + 1; j < n; j++) {
                s[j] = '0';
            }
            break;
        }
    }
}

bool isfinal(string s, int n) {
    for (int i = 0; i < n; i++) {
        if (s[i] == '0')
            return 0;
    }
    return 1;
}

void display(string s) {
    cout << s << ' ';
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        start(s, n);
        while (isfinal(s, n) == 0) {
            display(s);
            gen(s, n);
        }
        cout << s << endl;
    }
    return 0;
}