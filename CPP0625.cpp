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
    string maGV, hoTen, ten, mon;

public:
    friend istream &operator>>(istream &in, GiaoVien &x) {
        ++stt;
        if (stt < 10)
            x.maGV = "GV0" + to_string(stt);
        else
            x.maGV = "GV" + to_string(stt);
        getline(in, x.hoTen);
        getline(in, x.mon);
        stringstream ss2(x.hoTen);
        string temp;
        while (ss2 >> temp) {
            x.ten = temp;
        }
        temp.clear();
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
    friend bool cmp(GiaoVien x, GiaoVien y);
};

int GiaoVien::stt = 0;

bool cmp(GiaoVien x, GiaoVien y) {
    if (x.ten != y.ten)
        return x.ten < y.ten;
    else
        return x.maGV < y.maGV;
}

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
    sort(v.begin(), v.end(), cmp);
    for (GiaoVien x : v) {
        cout << x << endl;
    }
    return 0;
}