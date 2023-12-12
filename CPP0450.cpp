#include <bits/stdc++.h>
#define MAX 1000005
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int cnt[1000005];

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        bool check = 0;
        for (int &x : a) {
            cin >> x;
        }
        for (int x : a) {
            ++cnt[x];
            if (cnt[x] > 1) {
                cout << x << endl;
                check = 1;
                break;
            }
        }
        if (!check)
            cout << -1 << endl;
        for (int i = 0; i < MAX; i++)
            cnt[i] = 0;
    }
    return 0;
}