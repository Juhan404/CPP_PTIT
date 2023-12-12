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
    t.clear();
    cin >> s;
    for (char x : s) {
        if (t.find(x) == string::npos)
            t += x;
    }
    int lens = s.size(), lent = t.size();
    for (char x : t)
        ++need[x];
    string temp = "";
    int fmin = INT_MAX;
    for (int i = 0; i < lens; i++) {
        temp += s[i];
        if (need.count(s[i])) {
            ++have[s[i]];
        }
        while (have.size() >= need.size()) {
            fmin = min(fmin, (int)temp.size());
            if (need.count(temp[0]) && have.count(temp[0])) {
                --have[temp[0]];
                if (have[temp[0]] == 0) {
                    have.erase(temp[0]);
                }
            }
            temp.erase(0, 1);
        }
    }
    cout << fmin << endl;
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