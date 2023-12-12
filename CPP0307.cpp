#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int main() {
    fastsync();
    int t;
    cin >> t;
    cin.ignore(1);
    while (t--) {
        set<string> t1, t2;
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        string s;
        stringstream ss(s1);
        while (ss >> s) {
            t1.insert(s);
        }
        stringstream ss2(s2);
        while (ss2 >> s) {
            t2.insert(s);
        }
        for (string x : t1) {
            if (t2.find(x) == t2.end()) {
                cout << x << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}