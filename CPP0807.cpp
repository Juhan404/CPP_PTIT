#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

int a[1005];
int b[1005];

int main() {
    ifstream input("DATA.in");
    int n, m;
    input >> n >> m;
    while (n--) {
        int x;
        input >> x;
        ++a[x];
    }
    while (m--) {
        int x;
        input >> x;
        ++b[x];
    }
    for (int i = 0; i < 1005; i++) {
        if (a[i] && b[i])
            cout << i << ' ';
    }
    return 0;
}