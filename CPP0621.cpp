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
    SinhVien(string msv, string ten, string lop, string email) {
        this->msv = msv;
        this->ten = ten;
        this->lop = lop;
        this->email = email;
    }
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
    return x.msv < y.msv;
}

int main() {
    fastsync();
    string msv, ten, lop, email, x;
    int i = 1;
    vector<SinhVien> v;
    while (getline(cin, x)) {
        if (i == 1) {
            msv = x;
            ++i;
        }
        else if (i == 2) {
            ten = x;
            ++i;
        }
        else if (i == 3) {
            lop = x;
            ++i;
        }
        else {
            email = x;
            i = 1;
            SinhVien x(msv, ten, lop, email);
            v.push_back(x);
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (SinhVien x : v) {
        cout << x << endl;
    }
    return 0;
}