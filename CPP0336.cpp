#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

// #include <debug.h>
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

string s, t;
unordered_map<char, int> have, need;

void run_case() {
    cin >> s >> t;
    int lens = s.size(), lent = t.size();
    if (lens < lent) {
        cout << -1 << endl;
        return;
    }
    for (char x : t)
        ++need[x];
    string temp = "", res;
    int fmin = INT_MAX, cnt = 0;
    for (int i = 0; i < lens; i++) {
        temp += s[i];
        if (need.count(s[i])) {
            ++have[s[i]];
            if (have[s[i]] <= need[s[i]])
                ++cnt;
        }
        while (cnt == lent && have.size() >= need.size()) {
            if (temp.size() < fmin) {
                fmin = temp.size();
                res = temp;
            }
            if (need.count(temp[0]) && have.count(temp[0])) {
                --have[temp[0]];
                if (have[temp[0]] == 0) {
                    have.erase(temp[0]);
                }
                if (have[temp[0]] < need[temp[0]])
                    --cnt;
            }
            temp.erase(0, 1);
        }
    }
    if (fmin == INT_MAX)
        cout << -1 << endl;
    else
        cout << res << endl;
    have.clear();
    need.clear();
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