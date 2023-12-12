#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    double tong = 1;
    for (int i = 2; i <= n; i++) {
        tong += (double)1 / i;
    }
    cout << fixed << setprecision(4) << tong;
    return 0;
}