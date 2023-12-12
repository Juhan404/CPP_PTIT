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
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        int res = 0, c = 0, l = 0;
        while (ss >> tmp) {
            if ((tmp[tmp.size() - 1] - '0') & 1)
                ++l;
            else
                ++c;
            ++res;
        }
        if ((res & 1 && l > c) || (!(res & 1) && c > l))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}