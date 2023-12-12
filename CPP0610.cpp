#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

class PhanSo {
private:
    ll tu, mau;

public:
    PhanSo(ll tu, ll mau) {
        this->tu = tu;
        this->mau = mau;
    }
    friend istream &operator>>(istream &in, PhanSo &x) {
        in >> x.tu >> x.mau;
        return in;
    }
    friend ostream &operator<<(ostream &out, PhanSo x) {
        ll gcd = __gcd(x.tu, x.mau);
        x.tu /= gcd;
        x.mau /= gcd;
        out << x.tu << '/' << x.mau;
        return out;
    }
    friend PhanSo operator+(PhanSo a, PhanSo b) {
        PhanSo tong(1, 1);
        ll gcd = __gcd(a.mau, b.mau);
        ll lcm = a.mau / gcd * b.mau;
        tong.tu = a.tu * (lcm / a.mau) + b.tu * (lcm / b.mau);
        tong.mau = lcm;
        return tong;
    }
};

int main() {
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}