#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

struct tg {
    int h, p, s;
};

typedef struct tg tg;

bool cmp(tg x, tg y) {
    if (x.h != y.h)
        return x.h < y.h;
    else if (x.p != y.p)
        return x.p < y.p;
    else
        return x.s < y.s;
}

int main() {
    fastsync();
    int n;
    cin >> n;
    tg a[n];
    for (tg &x : a) {
        cin >> x.h >> x.p >> x.s;
    }
    sort(a, a + n, cmp);
    for (tg x : a) {
        cout << x.h << ' ' << x.p << ' ' << x.s << endl;
    }
    return 0;
}