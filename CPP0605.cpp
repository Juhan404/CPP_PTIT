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
        out << x.tu << '/' << x.mau;
        return out;
    }
    void rutgon() {
        ll gcd = __gcd(tu, mau);
        tu /= gcd;
        mau /= gcd;
    }
};

int main() {
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}