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
        string str;
        getline(cin, str);
        sort(str.begin(), str.end());
        int tong = 0;
        for (char x : str) {
            if (isdigit(x)) {
                tong += x - '0';
            }
        }
        for (char x : str) {
            if (isalpha(x))
                cout << x;
        }
        cout << tong << endl;
    }
    return 0;
}