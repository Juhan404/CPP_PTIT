// Fixed by LNDuc

#include <bits/stdc++.h>
#define MAX 1000005
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
        long long n, m, p;
        cin >> n >> m >> p;
        multiset<long long> st;
        ll a[n], b[m], c[p];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < p; i++) {
            cin >> c[i];
        }
        int x = 0, y = 0, z = 0;
        while (x < n && y < m && z < p) {
            if (a[x] == b[y] && b[y] == c[z]) {
                st.insert(a[x]);
                x++;
                y++;
                z++;
            }
            // do mang duoc sap xep nen dung dc cach nay
            else if (a[x] < b[y])
                x++; // phan tu a < phan tu b thi tang index toi khi a = b or lon hon b
            else if (b[y] < c[z])
                y++; // phan tu b < phan tu c thi tang index toi khi b = c or lon hon c
            else
                z++;
        }
        if (st.size() != 0) {
            for (auto x : st) {
                cout << x << " ";
            }
            cout << endl;
        }
        else
            cout << "-1" << endl;
    }
    return 0;
}