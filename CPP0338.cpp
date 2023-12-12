#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

// #include <debug.h>
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

void run_case() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    int count = 0;
    for (int i = 0; i <= s.length() - k; i++) {
        int M[1000] = {0};
        int x = 0;
        for (int j = i; j < s.length(); j++) {
            if (M[s[j]] == 0)
                x++;
            M[s[j]]++;
            if (x == k) {
                count++;
            }
            if (x > k)
                break;
        }
    }
    cout << count << endl;
}

int main() {
    fastsync();
    int Test;
    cin >> Test;
    for (int test = 1; test <= Test; ++test) {
        run_case();
    }
    return 0;
}