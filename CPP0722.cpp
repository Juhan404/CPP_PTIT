#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

string operator*(string a, int b) {
    if (a == "0" || b == 0)
        return "0";
    int n = a.length();
    string c(n, '0');
    int nho = 0;
    for (int i = n - 1; i >= 0; i--) {
        nho += (a[i] - '0') * b;
        c[i] = nho % 10 + '0';
        nho /= 10;
    }
    if (nho > 0)
        c = to_string(nho) + c;
    return c;
}

string CATALAN(int n) {
    vector<int> tu;
    for (int i = n + 2; i <= 2 * n; i++)
        tu.push_back(i);
    for (int i = 2; i <= n; i++) {
        int x = i;
        for (int j = 0; j < tu.size() && x > 1; j++) {
            int d = __gcd(tu[j], x);
            x /= d;
            tu[j] /= d;
        }
    }
    string res = "1";
    for (int i = 0; i < tu.size(); i++)
        res = res * tu[i];
    return res;
}

void run_case() {
    short int n;
    cin >> n;
    cout << CATALAN(n + 1) << endl;
}

int main() {
    fastsync();
    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; ++test) {
        run_case();
    }
    return 0;
}