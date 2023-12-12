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
    string msv, ten, lop, email;

public:
    friend istream &operator>>(istream &in, SinhVien &x) {
        in >> x.msv;
        cin.ignore();
        getline(in, x.ten);
        in >> x.lop >> x.email;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien x) {
        out << x.msv << ' ' << x.ten << ' ' << x.lop << ' ' << x.email;
        return out;
    }
    friend bool cmp(SinhVien x, SinhVien y);
};

bool cmp(SinhVien x, SinhVien y) {
    if (x.lop != y.lop)
        return x.lop < y.lop;
    else
        return x.msv < y.msv;
}

int main() {
    fastsync();
    int t;
    cin >> t;
    vector<SinhVien> v;
    while (t--) {
        SinhVien x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for (SinhVien x : v) {
        cout << x << endl;
    }
    return 0;
}