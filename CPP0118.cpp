#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int pt(ll n) {
    if (n == 1)
        return 0;
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ++cnt;
            n /= i;
            if (n % i == 0)
                return 0;
        }
    }
    if (n != 1)
        ++cnt;
    if (cnt == 3)
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
        cout << pt(n) << endl;
    }
    return 0;
}