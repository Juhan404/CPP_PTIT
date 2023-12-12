#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

void lower(string &s) {
    for (char &x : s) {
        x = tolower(x);
    }
}

int main() {
    ifstream input1("DATA1.in");
    ifstream input2("DATA2.in");
    string s;
    set<string> s1, s2, hop;
    while (input1 >> s) {
        lower(s);
        s1.insert(s);
        hop.insert(s);
    }
    while (input2 >> s) {
        lower(s);
        s2.insert(s);
        hop.insert(s);
    }
    for (string x : hop) {
        cout << x << ' ';
    }
    cout << endl;
    for (string x : s1) {
        if (s2.find(x) != s2.end()) {
            cout << x << ' ';
        }
    }
    return 0;
}