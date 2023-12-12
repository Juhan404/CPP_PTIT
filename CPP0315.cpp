#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

void run_case() {
    string s;
    cin >> s;
    int i = s.size() - 1;
    while (i >= 1 && s[i] >= s[i - 1]) {
        --i;
    }
    if (i == 0)
        cout << -1 << endl;
    else {
        int x = i;
        for (int j = i; j < s.size(); ++j) {
            if (s[j] > s[x] && s[i - 1] > s[j]) {
                x = j;
            }
        }
        swap(s[x], s[i - 1]);
        cout << s << endl;
    }
}

int main() {
    fastsync();
    int Test;
    cin >> Test;
    for (int test = 1; test <= Test; ++test) {
        run_case();
    }
    return 0;
}
