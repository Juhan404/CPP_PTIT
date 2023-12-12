#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

class DoanhNghiep {
private:
    string maDN, ten;
    int soSV;

public:
    friend istream &operator>>(istream &in, DoanhNghiep &x) {
        in >> x.maDN;
        cin.ignore();
        getline(in, x.ten);
        in >> x.soSV;
        return in;
    }
    int getSL() {
        return soSV;
    }
    friend ostream &operator<<(ostream &out, DoanhNghiep x) {
        out << x.maDN << ' ' << x.ten << ' ' << x.soSV;
        return out;
    }
    friend bool cmp(DoanhNghiep x, DoanhNghiep y);
};

bool cmp(DoanhNghiep x, DoanhNghiep y) {
    if (x.soSV != y.soSV)
        return x.soSV > y.soSV;
    else
        return x.maDN < y.maDN;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    vector<DoanhNghiep> v;
    while (t--) {
        DoanhNghiep x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
        for (DoanhNghiep x : v) {
            int temp = x.getSL();
            if (temp >= a && temp <= b)
                cout << x << endl;
        }
    }
    return 0;
}