#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

void chuanhoa(string &s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
}

int main() {
    vector<string> v;
    string s;
    while (cin >> s) {
        chuanhoa(s);
        v.push_back(s);
    }
    cout << v[v.size() - 1];
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i][0];
    }
    cout << "@ptit.edu.vn";
    return 0;
}