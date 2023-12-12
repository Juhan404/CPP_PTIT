#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

bool check(ll n) {
    int r = n % 10;
    n /= 10;
    while (n) {
        if (abs(n % 10 - r) != 1)
            return 0;
        r = n % 10;
        n /= 10;
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (check(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}