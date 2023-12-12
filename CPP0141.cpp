#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int fibo(ll n) {
    ll f0 = 0, f1 = 1, fn;
    while (n >= f0) {
        fn = f0 + f1;
        if (n == f0 || n == f1 || n == fn)
            return 1;
        f0 = f1;
        f1 = fn;
    }
    return 0;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        ll n;
        cin >> n;
        if (fibo(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}