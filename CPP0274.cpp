#include <bits/stdc++.h>
#define MOD 1000000007
#define MAX 1000005
#define ll long long

using namespace std;

int cnt[1000005];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, dem = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            ++cnt[a[i]];
        }
        for (int i = 0; i < n; i++) {
            if (cnt[a[i]] > 1)
                ++dem;
        }
        cout << dem << endl;
        for (int i = 0; i < MAX; i++) {
            cnt[i] = 0;
        }
    }
    return 0;
}