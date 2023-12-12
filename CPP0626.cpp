#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

class GiaoVien {
private:
    static int stt;
    string maGV, hoTen, mon;

public:
    friend istream &operator>>(istream &in, GiaoVien &x) {
        ++stt;
        if (stt < 10)
            x.maGV = "GV0" + to_string(stt);
        else
            x.maGV = "GV" + to_string(stt);
        getline(in, x.hoTen);
        getline(in, x.mon);
        string temp;
        string vietTat = "";
        stringstream ss(x.mon);
        while (ss >> temp) {
            vietTat += (char)(toupper(temp[0]));
        }
        x.mon = vietTat;
        return in;
    }
    friend ostream &operator<<(ostream &out, GiaoVien x) {
        out << x.maGV << ' ' << x.hoTen << ' ' << x.mon;
        return out;
    }
    string getMon() {
        return mon;
    }
};

int GiaoVien::stt = 0;

int main() {
    fastsync();
    int t;
    cin >> t;
    cin.ignore();
    vector<GiaoVien> v;
    while (t--) {
        GiaoVien x;
        cin >> x;
        v.push_back(x);
    }
    int q;
    cin >> q;
    cin.ignore();
    while (q--) {
        string mon;
        getline(cin, mon);
        stringstream ss(mon);
        string temp, vt = "";
        while (ss >> temp) {
            vt += (char)(toupper(temp[0]));
        }
        cout << "DANH SACH GIANG VIEN BO MON " << vt << ":\n";
        for (GiaoVien x : v) {
            if (x.getMon() == vt) {
                cout << x << endl;
            }
        }
    }
    return 0;
}