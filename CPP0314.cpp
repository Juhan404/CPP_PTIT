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
    int t;
    cin >> t;
    cin.ignore(1);
    set<string> se;
    while (t--) {
        string s;
        getline(cin, s);
        se.insert(s);
    }
    cout << se.size();
    return 0;
}