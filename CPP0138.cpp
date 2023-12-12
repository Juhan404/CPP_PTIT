#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

int nt[10000005];

void sang() {
    for (int i = 2; i < MAX; i++) {
        nt[i] = 1;
    }
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (nt[i]) {
            for (int j = i * i; j < MAX; j += i) {
                nt[j] = 0;
            }
        }
    }
}

int main() {
    sang();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 2; i <= n / 2; i++) {
            if (nt[i] && nt[n - i]) {
                cout << i << ' ' << n - i << endl;
                break;
            }
        }
    }
    return 0;
}