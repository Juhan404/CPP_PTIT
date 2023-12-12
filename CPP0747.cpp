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
    cin.ignore();
    while (t--) {
        string s;
        int tong = 0;
        getline(cin, s);
        while (s.find("100") != string::npos) {
            int tmp = s.find("100");
            s.erase(tmp, 3);
            tong += 3;
        }
        cout << s << endl;
    }
    return 0;
}