#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

bool check(string s) {
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - 1 - i])
            return 0;
    }
    return 1;
}

bool cmp(pair<string, int> x, pair<string, int> y) {
    if (x.first.size() != y.first.size()) {
        return x.first.size() > y.first.size();
    }
    else {
        return x.first > y.first;
    }
}

int main() {
    fastsync();
    string s;
    vector<pair<string, int>> v;
    map<string, int> m;
    while (cin >> s) {
        if (check(s) && s.size() > 1)
            ++m[s];
    }
    for (auto x : m) {
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto x : v) {
        cout << x.first << ' ' << x.second << endl;
    }
    return 0;
}