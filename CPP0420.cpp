#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int k;

bool cmp(int x, int y) {
    return abs(x - k) < abs(y - k);
}

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        stable_sort(a, a + n, cmp);
        for (int x : a)
            cout << x << ' ';
        cout << endl;
    }
    return 0;
}