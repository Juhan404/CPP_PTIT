#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int pt(int n) {
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i % 2 == 0)
                ++cnt;
            if (i != n / i && n / i % 2 == 0)
                ++cnt;
        }
    }
    return cnt;
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