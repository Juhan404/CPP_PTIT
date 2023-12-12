#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

class KhachHang;
class MatHang;

vector<pair<string, KhachHang>> v1;
vector<pair<string, MatHang>> v2;

class KhachHang {
private:
    static int stt;
    string maKH, ten, gt, bd, dc;

public:
    friend istream &operator>>(istream &in, KhachHang &x) {
        ++stt;
        if (stt < 10)
            x.maKH = "KH00" + to_string(stt);
        else
            x.maKH = "KH0" + to_string(stt);
        scanf("\n");
        getline(in, x.ten);
        getline(in, x.gt);
        getline(in, x.bd);
        getline(in, x.dc);
        v1.push_back({x.maKH, x});
        return in;
    }
    void in() {
        cout << ten << ' ' << dc << ' ';
    }
};

class MatHang {
private:
    static int stt;
    string maMH, ten, donvi;
    ll gm, gb, loinhuan;

public:
    friend istream &operator>>(istream &in, MatHang &x) {
        scanf("\n");
        ++stt;
        getline(in, x.ten);
        getline(in, x.donvi);
        in >> x.gm >> x.gb;
        x.loinhuan = x.gb - x.gm;
        if (stt < 10)
            x.maMH = "MH00" + to_string(stt);
        else
            x.maMH = "MH0" + to_string(stt);
        v2.push_back({x.maMH, x});
        return in;
    }
    ll getGB() {
        return gb;
    }
    ll getLN() {
        return loinhuan;
    }
    void in() {
        cout << ten << ' ';
    }
};

class HoaDon : public KhachHang, public MatHang {
private:
    static int stt;
    string maMH, maKH, maHD;
    ll sl, gia, ln;

public:
    friend istream &operator>>(istream &in, HoaDon &x) {
        in >> x.maKH >> x.maMH >> x.sl;
        ++stt;
        if (stt < 10)
            x.maHD = "HD00" + to_string(stt);
        else if (stt < 100)
            x.maHD = "HD0" + to_string(stt);
        else
            x.maHD = "HD" + to_string(stt);
        for (auto i : v2) {
            if (i.first == x.maMH) {
                x.ln = i.second.getLN() * x.sl;
                break;
            }
        }
        return in;
    }
    friend ostream &operator<<(ostream &out, HoaDon x) {
        out << x.maHD << ' ';
        ll gia = -1;
        for (auto i : v1) {
            if (i.first == x.maKH) {
                i.second.in();
                break;
            }
        }
        for (auto i : v2) {
            if (i.first == x.maMH) {
                i.second.in();
                gia = i.second.getGB();
                break;
            }
        }
        out << x.sl << ' ' << 1ll * x.sl * gia << ' ' << x.ln << endl;
        return out;
    }
    ll getLN() {
        return ln;
    }
};

bool cmp(HoaDon x, HoaDon y) {
    return x.getLN() > y.getLN();
}

int KhachHang::stt = 0;
int MatHang::stt = 0;
int HoaDon::stt = 0;

void sapxep(HoaDon a[], int k) {
    stable_sort(a, a + k, cmp);
}

int main() {
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> dskh[i];
    cin >> M;
    for (i = 0; i < M; i++)
        cin >> dsmh[i];
    cin >> K;
    for (i = 0; i < K; i++)
        cin >> dshd[i];

    sapxep(dshd, K);

    for (i = 0; i < K; i++)
        cout << dshd[i];
    return 0;
}