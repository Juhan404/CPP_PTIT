#include <bits/stdc++.h>
#define MAX 1005
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int cnt[1005];

int main() {
    fastsync();
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) {
        cin >> x;
        ++cnt[x];
    }
    for (int i = 0; i < MAX; i++) {
        if (cnt[i])
            cout << i << ' ';
    }
    return 0;
}