#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000001
#define ll long long

using namespace std;

ll fibo[94];
int check[1005];

void sang() {
    fibo[1] = 0, fibo[2] = 1;
    for (ll i = 3; i <= 93; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int i = 1; i <= 93; i++) {
        if (fibo[i] < 1005) {
            check[fibo[i]] = 1;
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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++) {
            if (check[a[i]])
                cout << a[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}