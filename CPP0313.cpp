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
    string str;
    getline(cin, str);
    string del;
    getline(cin, del);
    stringstream ss(str);
    string s;
    while (ss >> s) {
        if (s != del)
            cout << s << ' ';
    }
    return 0;
}