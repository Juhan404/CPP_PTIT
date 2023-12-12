#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

bool check = true;

class NhanVien {
private:
    string ten, date, gt, ms, dc, ns, mst;

public:
    friend istream &operator>>(istream &in, NhanVien &x) {
        x.ms = "00001";
        getline(in, x.ten);
        in >> x.gt >> x.ns;
        cin.ignore();
        getline(in, x.dc);
        in >> x.mst >> x.date;
        return in;
    }
    friend ostream &operator>>(ostream &out, NhanVien x) {
        out << x.ms << ' ' << x.ten << ' ' << x.gt << ' ' << x.ns << ' ' << x.dc << ' ' << x.mst << ' ' << x.date;
        return out;
    }
};

int main() {
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}