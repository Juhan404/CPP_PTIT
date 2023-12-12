#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

bool check(int a[], int l, int r) {
    int check = -1;
    for (int i = l; i < r; i++) {
        if (a[i] > a[i + 1]) {
            check = i;
            break;
        }
    }
    if (check != -1) {
        for (int i = check; i < r; i++) {
            if (a[i] < a[i + 1])
                return 0;
        }
    }
    return 1;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        int l, r;
        cin >> l >> r;
        if (check(a, l, r))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}