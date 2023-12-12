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
    static int stt;
    string msv, ten, lop, ngaySinh;
    double gpa;

public:
    SinhVien() {
        msv = ten = lop = ngaySinh = "";
        gpa = 0;
    }
    friend istream &operator>>(istream &in, SinhVien &x) {
        cin.ignore();
        ++stt;
        if (stt < 10)
            x.msv = "B20DCCN00" + to_string(stt);
        else
            x.msv = "B20DCCN0" + to_string(stt);
        getline(in, x.ten);
        in >> x.lop >> x.ngaySinh >> x.gpa;
        if (x.ngaySinh[2] != '/')
            x.ngaySinh = "0" + x.ngaySinh;
        if (x.ngaySinh[5] != '/')
            x.ngaySinh.insert(3, "0");
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien x) {
        out << x.msv << ' ' << x.ten << ' ' << x.lop << ' ' << x.ngaySinh << ' ' << fixed << setprecision(2) << x.gpa << endl;
        return out;
    }
};

int SinhVien::stt = 0;

int main() {
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++) {
        cout << ds[i];
    }
    return 0;
}