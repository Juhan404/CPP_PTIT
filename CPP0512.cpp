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
    ll tu, mau;
};

typedef struct PhanSo ps;

void rutgon(ps &a) {
    ll gcd = __gcd(a.tu, a.mau);
    a.tu /= gcd;
    a.mau /= gcd;
}

ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

ps tong(ps a, ps b) {
    int x = lcm(a.mau, b.mau);
    ps t;
    t.mau = x;
    t.tu = a.tu * (x / a.mau) + b.tu * (x / b.mau);
    rutgon(t);
    return t;
}

void process(ps a, ps b) {
    ps c, d;
    c = tong(a, b);
    c.tu *= c.tu;
    c.mau *= c.mau;
    rutgon(c);
    cout << c.tu << '/' << c.mau << ' ';
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    rutgon(d);
    cout << d.tu << '/' << d.mau << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}