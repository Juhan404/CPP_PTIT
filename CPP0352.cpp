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
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}

int main() {
    fastsync();
    int t;
    cin >> t;
    cin.ignore();
    multiset<string> ms;
    while (t--) {
        string str;
        getline(cin, str);
        stringstream ss(str);
        string s;
        string mail;
        vector<string> v;
        while (ss >> s) {
            chuanhoa(s);
            v.push_back(s);
        }
        mail = v[v.size() - 1];
        for (int i = 0; i < v.size() - 1; i++) {
            mail += v[i][0];
        }
        ms.insert(mail);
        if (ms.count(mail) > 1) {
            cout << mail << ms.count(mail);
        }
        else
            cout << mail;
        cout << "@ptit.edu.vn\n";
    }
    return 0;
}