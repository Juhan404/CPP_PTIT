#include <bits/stdc++.h>
using namespace std;
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long

const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

void run_case() {
    int n;
    cin >> n;
    int a[n], ta[n], b[n], tb[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0)
            ta[i] = a[i];
        else
            ta[i] = ta[i - 1] + a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (i == 0)
            tb[i] = b[i];
        else
            tb[i] = tb[i - 1] + b[i];
    }
    int fmax = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (i == 0) {
                if (ta[j] == tb[j])
                    fmax = max(fmax, j - i + 1);
            }
            else if (ta[j] - ta[i - 1] == tb[j] - tb[i - 1])
                fmax = max(fmax, j - i + 1);
        }
    }
    cout << fmax << endl;
}

int main() {
    fastsync();
    int Test;
    cin >> Test;
    for (int test = 1; test <= Test; ++test) {
        run_case();
    }
    return 0;
}
