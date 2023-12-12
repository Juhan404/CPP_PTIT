#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> a[n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int tmp;
                cin >> tmp;
                a[i].insert(tmp);
            }
        }
        int cnt = 0;
        for (auto x : a[0]) {
            bool check = 1;
            for (int j = 1; j < n; j++) {
                if (a[j].find(x) == a[j].end()) {
                    check = 0;
                    break;
                }
            }
            if (check)
                ++cnt;
        }
        cout << cnt << endl;
    }
    return 0;
}