#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
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
        int a[n];
        for (int &x : a)
            cin >> x;
        int min_val = INT_MAX, posx = -1, posy = -1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (abs(a[i] + a[j]) < min_val) {
                    min_val = abs(a[i] + a[j]);
                    posx = i;
                    posy = j;
                }
            }
        }
        cout << a[posx] + a[posy] << endl;
    }
    return 0;
}