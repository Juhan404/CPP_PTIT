#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

void __print(int x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i);}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

ifstream s1, s2, s3;

class KhachHang;
class MatHang;
class HoaDon;

vector<KhachHang> v1;
vector<MatHang> v2;
vector<HoaDon> v3;

class KhachHang {
public:
    static int stt;
    string maKH, ten, gt, bd, dc;
    void nhap() {
        ++stt;
        if (stt < 10)
            maKH = "KH00" + to_string(stt);
        else
            maKH = "KH0" + to_string(stt);
        getline(s1, ten);
        getline(s1, gt);
        getline(s1, bd);
        getline(s1, dc);
        debug(ten, gt, bd, dc);
    }
    void in() {
        cout << ten << ' ' << dc << ' ';
    }
};

class MatHang {
public:
    static int stt;
    string maMH, ten, donvi;
    ll gm, gb, loinhuan;
    void nhap() {
        cin.ignore(INT_MAX, '\n');
        ++stt;
        getline(s2, ten);
        getline(s2, donvi);
        s2 >> gm >> gb;
        loinhuan = gb - gm;
        if (stt < 10)
            maMH = "MH00" + to_string(stt);
        else
            maMH = "MH0" + to_string(stt);
        debug(ten, donvi, gm, gb, loinhuan);
    }
    ll getGB() {
        return gb;
    }
    ll getLN() {
        return loinhuan;
    }
    void in() {
        cout << ten << ' ' << donvi << ' ' << gm << ' ' << gb << ' ';
    }
};

class HoaDon : public KhachHang, public MatHang {
public:
    static int stt;
    string maMH, maKH, maHD;
    ll sl, gia;
    void nhap() {
        s3 >> maKH >> maMH >> sl;
        ++stt;
        if (stt < 10)
            maHD = "HD00" + to_string(stt);
        else if (stt < 100)
            maHD = "HD0" + to_string(stt);
        else
            maHD = "HD" + to_string(stt);
    }
    void in() {
        cout << maHD << ' ';
        ll gia = -1;
        for (auto i : v1) {
            if (i.maKH == maKH) {
                i.in();
                break;
            }
        }
        for (auto i : v2) {
            if (i.maMH == maMH) {
                i.in();
                gia = i.getGB();
                break;
            }
        }
        cout << sl << ' ' << 1ll * sl * gia << endl;
    }
};

int KhachHang::stt = 0;
int MatHang::stt = 0;
int HoaDon::stt = 0;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    s1.open("KH.in");
    int N, M, K, i;
    string s;
    getline(s1, s);
    N = stoi(s);
    cin.ignore(INT_MAX, '\n');
    for (i = 0; i < N; i++) {
        KhachHang x;
        x.nhap();
        v1.push_back(x);
    }
    s1.close();
    s2.open("MH.in");
    getline(s2, s);
    M = stoi(s);
    cin.ignore(INT_MAX, '\n');
    for (i = 0; i < M; i++) {
        MatHang x;
        x.nhap();
        v2.push_back(x);
    }
    s2.close();
    s3.open("HD.in");
    getline(s3, s);
    K = stoi(s);
    cin.ignore(INT_MAX, '\n');
    for (i = 0; i < K; i++) {
        HoaDon x;
        x.nhap();
        v3.push_back(x);
    }
    s3.close();
    for (i = 0; i < K; i++)
        v3[i].in();
    return 0;
}