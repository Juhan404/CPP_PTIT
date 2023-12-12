#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

ll fibo(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    ll f0 = 1, f1 = 1, fn, cnt = 2;
    while (1) {
        fn = f0 + f1;
        ++cnt;
        if (cnt == n)
            return fn;
        f0 = f1;
        f1 = fn;
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << fibo(n) << endl;
    }
    return 0;
}