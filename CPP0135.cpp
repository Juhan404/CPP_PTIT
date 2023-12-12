#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000005
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
        for (int i = 1; i <= sqrt(n); i++) {
            if (nt[i]) {
                cout << 1ll * i * i << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}