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
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
}

void chuanhoa2(string &s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
}

int main() {
    vector<string> v;
    string s;
    while (cin >> s) {
        chuanhoa(s);
        v.push_back(s);
    }
    int sz = v.size();
    for (int i = 0; i < v.size() - 2; i++) {
        cout << v[i] << ' ';
    }
    chuanhoa2(v[sz - 1]);
    cout << v[sz - 2] << ", ";
    cout << v[sz - 1];
    return 0;
}