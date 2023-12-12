#include <bits/stdc++.h>
#define MAX 100005
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int cnta[100005];
int cntb[100005];

int main() {
    fastsync();
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int &x : a) {
            cin >> x;
            ++cnta[x];
        }
        for (int &x : b) {
            cin >> x;
            ++cntb[x];
        }
        for (int i = 0; i < MAX; i++) {
            if (cnta[i] || cntb[i])
                cout << i << ' ';
        }
        cout << endl;
        for (int i = 0; i < MAX; i++) {
            if (cnta[i] && cntb[i])
                cout << i << ' ';
        }
        cout << endl;
        for (int i = 0; i < MAX; i++) {
            cnta[i] = 0;
            cntb[i] = 0;
        }
    }
    return 0;
}