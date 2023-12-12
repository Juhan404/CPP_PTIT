#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int Count(string s, int n) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        int x = 0;
        for (int j = i; j < s.size(); j++) {
            x = (x * 10 + s[j] - '0') % n;
            if (!x)
                ++cnt;
        }
    }
    return cnt;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        cout << Count(s, 8) - Count(s, 24) << endl;
    }
    return 0;
}