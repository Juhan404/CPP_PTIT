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
    string getNganh() {
        string temp = msv.substr(3, 4);
        return temp;
    }
    char getDau() {
        return lop[0];
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
    cin.ignore();
    while (q--) {
        string temp;
        getline(cin, temp);
        for (char &x : temp)
            x = toupper(x);
        string nganh;
        if (temp == "KE TOAN")
            nganh = "DCKT";
        else if (temp == "CONG NGHE THONG TIN")
            nganh = "DCCN";
        else if (temp == "AN TOAN THONG TIN")
            nganh = "DCAT";
        else if (temp == "DIEN TU")
            nganh = "DCDT";
        else
            nganh = "DCVT";
        cout << "DANH SACH SINH VIEN NGANH " << temp << ":\n";
        for (SinhVien x : v) {
            if (x.getNganh() == nganh)
                if (nganh == "DCCN" || nganh == "DCAT") {
                    if (x.getDau() != 'E')
                        cout << x << endl;
                }
                else
                    cout << x << endl;
        }
    }
    return 0;
}