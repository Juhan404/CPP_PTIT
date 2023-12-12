#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

bool thuan_nghich(ll n) {
    ll temp = n, lat = 0;
    while (n) {
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    if (lat == temp)
        return 1;
    else
        return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (thuan_nghich(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}