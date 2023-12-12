#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

bool tang(int n) {
    int last = n % 10;
    n /= 10;
    while (n) {
        if (n % 10 >= last)
            return 0;
        last = n % 10;
        n /= 10;
    }
    return 1;
}

bool giam(int n) {
    int last = n % 10;
    n /= 10;
    while (n) {
        if (n % 10 <= last)
            return 0;
        last = n % 10;
        n /= 10;
    }
    return 1;
}

bool nt(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = pow(10, n - 1) + 1; i < pow(10, n); i += 2) {
            if ((tang(i) || giam(i)) && nt(i))
                ++cnt;
        }
        cout << cnt << endl;
    }
    return 0;
}