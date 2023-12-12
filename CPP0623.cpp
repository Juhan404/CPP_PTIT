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
    string getKhoa() {
        string temp = to_string(lop[1] + lop[2]);
        return temp;
    }
    friend ostream &operator<<(ostream &out, SinhVien x) {
        out << x.msv << ' ' << x.ten << ' ' << x.lop << ' ' << x.email;
        return out;
    }
};

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
    int q;
    cin >> q;
    while (q--) {
        string temp;
        cin >> temp;
        string khoa = to_string(temp[2] + temp[3]);
        cout << "DANH SACH SINH VIEN KHOA " << temp << ":\n";
        for (SinhVien x : v) {
            if (x.getKhoa() == khoa)
                cout << x << endl;
        }
    }
    return 0;
}