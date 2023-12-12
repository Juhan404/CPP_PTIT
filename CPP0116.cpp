#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int uoc(int n) {
    if (n == 1)
        return 1;
    if (n % 2 == 0)
        return 2;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return i;
    }
    return n;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cout << uoc(i) << ' ';
        }
        cout << endl;
    }
    return 0;
}