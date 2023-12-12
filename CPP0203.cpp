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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] >= 0)
                ++cnt[a[i]];
        }
        for (int i = 1; i < MAX; i++) {
            if (cnt[i] == 0) {
                cout << i << endl;
                break;
            }
        }
        for (int i = 0; i < MAX; i++) {
            cnt[i] = 0;
        }
    }
    return 0;
}