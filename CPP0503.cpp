#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

struct PhanSo {
    ll t, m;
};

typedef struct PhanSo ps;

void nhap(ps &a) {
    cin >> a.t >> a.m;
}

void rutgon(ps &a) {
    ll c = __gcd(a.t, a.m);
    a.t /= c;
    a.m /= c;
}

void in(ps a) {
    cout << a.t << '/' << a.m;
}

int main() {
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}