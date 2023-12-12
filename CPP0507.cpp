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

ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}
void rutgon(ps &a) {
    ll c = __gcd(a.t, a.m);
    a.t /= c;
    a.m /= c;
}

ps tong(ps a, ps b) {
    ps x;
    ll qd = lcm(a.m, b.m);
    x.m = qd;
    a.t *= qd / a.m;
    b.t *= qd / b.m;
    x.t = a.t + b.t;
    rutgon(x);
    return x;
}

void in(ps a) {
    cout << a.t << '/' << a.m;
}

int main() {
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}