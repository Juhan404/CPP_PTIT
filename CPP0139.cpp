#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int tongcs(int n) {
    int tong = 0;
    while (n) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

bool prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

bool smith(int n) {
    if (prime(n))
        return 0;
    int temp = tongcs(n);
    int tong = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            tong += tongcs(i);
            n /= i;
        }
    }
    if (n != 1)
        tong += tongcs(n);
    if (temp == tong)
        return 1;
    else
        return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (smith(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}