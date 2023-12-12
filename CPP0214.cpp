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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
        cin >> x;
    multiset<int> se;
    for (int i = 0; i < k; ++i) {
        se.insert(a[i]);
    }
    auto cuoi = se.end();
    --cuoi;
    cout << *cuoi << ' ';
    for (int i = 1; i <= n - k; ++i) {
        se.erase(se.find(a[i - 1]));
        se.insert(a[i + k - 1]);
        auto cuoi = se.end();
        --cuoi;
        cout << *cuoi << ' ';
    }
    cout << endl;
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
