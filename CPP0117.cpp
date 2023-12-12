#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        while (n >= 10) {
            int tong = 0;
            while (n) {
                tong += n % 10;
                n /= 10;
            }
            n = tong;
        }
        cout << n << endl;
    }
    return 0;
}