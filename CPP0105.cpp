#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

bool loc_phat(int n) {
    while (n) {
        int r = n % 10;
        if (r != 6 && r != 0 && r != 8)
            return 0;
        n /= 10;
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (loc_phat(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}