#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

class SinhVien {
private:
    string msv, ten, lop, ngaySinh;
    double gpa;

public:
    friend istream &operator>>(istream &in, SinhVien &x) {
        x.msv = "B20DCCN001";
        getline(in, x.ten);
        in >> x.lop >> x.ngaySinh >> x.gpa;
        if (x.ngaySinh[2] != '/')
            x.ngaySinh = "0" + x.ngaySinh;
        if (x.ngaySinh[5] != '/')
            x.ngaySinh.insert(3, "0");
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien x) {
        cout << x.msv << " " << x.ten << ' ' << x.lop << ' ' << x.ngaySinh << ' ' << fixed << setprecision(2) << x.gpa;
        return out;
    }
};

int main() {
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}