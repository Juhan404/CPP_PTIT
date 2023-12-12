#include <bits/stdc++.h>
#define MAX 1000005
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int a[1000005];

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int b[m];
        while (n--) {
            int tmp;
            cin >> tmp;
            ++a[tmp];
        }
        for (int &x : b) {
            cin >> x;
        }
        for (int x : b) {
            if (a[x]) {
                while (a[x]) {
                    cout << x << ' ';
                    --a[x];
                }
            }
        }
        for (int i = 0; i < MAX; i++) {
            if (a[i]) {
                while (a[i]) {
                    cout << i << ' ';
                    --a[i];
                }
            }
        }
        cout << endl;
        for (int i = 0; i < MAX; i++) {
            a[i] = 0;
        }
    }
    return 0;
}