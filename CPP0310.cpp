#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

void ln(string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '5')
            s[i] = '6';
    }
}

void nn(string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '6')
            s[i] = '5';
    }
}

int main() {
    fastsync();
    int t;
    cin >> t;
    cin.ignore(1);
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        nn(s1);
        nn(s2);
        ll tongmin = stoll(s1) + stoll(s2);
        ln(s1);
        ln(s2);
        ll tongmax = stoll(s1) + stoll(s2);
        cout << tongmin << ' ' << tongmax << endl;
    }
    return 0;
}