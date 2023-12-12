#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    ll tong = 1;
    ll gt = 1;
    for (int i = 2; i <= n; i++) {
        gt *= 1ll * i;
        tong += gt;
    }
    cout << tong;
    return 0;
}