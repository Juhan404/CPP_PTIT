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
    ifstream input("VANBAN.in");
    string s;
    set<string> se;
    while (input >> s) {
        lower(s);
        se.insert(s);
    }
    for (string x : se) {
        cout << x << endl;
    }
    return 0;
}