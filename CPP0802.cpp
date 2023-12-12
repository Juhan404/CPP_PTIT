#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

bool check(string s) {
    if (s.size() > 18)
        return false;
    for (char x : s) {
        if (!isdigit(x))
            return false;
    }
    return true;
}

int main() {
    ifstream input("DATA.in");
    string s;
    ll tong = 0;
    while (input >> s) {
        if (check(s)) {
            ll temp = stoll(s);
            if (temp <= INT_MAX)
                tong += temp;
        }
    }
    cout << tong;
    return 0;
}