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
    for (int i = 1; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}

int main() {
    fastsync();
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        string str;
        getline(cin, str);
        vector<string> v;
        stringstream ss(str);
        string s;
        while (ss >> s) {
            chuanhoa(s);
            v.push_back(s);
        }
        if (n == 1) {
            cout << v[v.size() - 1] << ' ';
            for (int i = 0; i < v.size() - 1; i++) {
                cout << v[i] << ' ';
            }
            cout << endl;
        }
        else {
            for (int i = 1; i < v.size(); i++) {
                cout << v[i] << ' ';
            }
            cout << v[0] << endl;
        }
    }
    return 0;
}