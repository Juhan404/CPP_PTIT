#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

bool tang(int a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i - 1])
            return 0;
    }
    return 1;
}

bool bn(int a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1])
            return 0;
    }
    return 1;
}

bool bdhc(int a[], int n) {
    for (int i = 1; i < 3; i++) {
        if (a[i] != a[i - 1])
            return 0;
    }
    if (a[n - 1] != a[n - 2])
        return 0;
    return 1;
}

bool lp(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != 6 && a[i] != 8)
            return 0;
    }
    return 1;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    cin.ignore(1);
    while (t--) {
        string s;
        getline(cin, s);
        int a[5], j = 0;
        for (int i = 5; i < s.length(); i++) {
            if (isdigit(s[i])) {
                a[j++] = s[i] - '0';
            }
        }
        if (tang(a, j) || bn(a, j) || bdhc(a, j) || lp(a, j))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}