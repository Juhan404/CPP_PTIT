#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

class NhanVien {
private:
    static int stt;
    string maNV, ten, gioiTinh, ngaySinh, diaChi, msThue, hopDong, d, m, y;

public:
    friend istream &operator>>(istream &in, NhanVien &x) {
        ++stt;
        cin.ignore();
        if (stt < 10)
            x.maNV = "0000" + to_string(stt);
        else
            x.maNV = "000" + to_string(stt);
        getline(in, x.ten);
        in >> x.gioiTinh >> x.ngaySinh;
        cin.ignore();
        getline(in, x.diaChi);
        in >> x.msThue >> x.hopDong;
        stringstream ss(x.ngaySinh);
        getline(ss, x.m, '/');
        getline(ss, x.d, '/');
        getline(ss, x.y, '/');
        return in;
    }
    friend ostream &operator<<(ostream &out, NhanVien x) {
        out << x.maNV << ' ' << x.ten << ' ' << x.gioiTinh << ' ' << x.ngaySinh << ' ' << x.diaChi << ' ' << x.msThue << ' ' << x.hopDong << endl;
        return out;
    }
    friend bool cmp(NhanVien x, NhanVien y);
    friend void sapxep(NhanVien ds[], int n);
};

bool cmp(NhanVien x, NhanVien y) {
    if (x.y != y.y)
        return x.y < y.y;
    else if (x.m != y.m)
        return x.m < y.m;
    else
        return x.d < y.d;
}

void sapxep(NhanVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

int NhanVien::stt = 0;

int main() {
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}