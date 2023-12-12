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
    string maNV, ten, gioiTinh, ngaySinh, diaChi, msThue, hopDong;

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
        return in;
    }
    friend ostream &operator<<(ostream &out, NhanVien x) {
        out << x.maNV << ' ' << x.ten << ' ' << x.gioiTinh << ' ' << x.ngaySinh << ' ' << x.diaChi << ' ' << x.msThue << ' ' << x.hopDong << endl;
        return out;
    }
};

int NhanVien::stt = 0;

int main() {
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}