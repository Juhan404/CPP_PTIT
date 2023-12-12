#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

struct SinhVien {
    string name, lop, date;
    double gpa;
};

typedef struct SinhVien sv;

void nhapThongTinSV(sv &a) {
    getline(cin, a.name);
    cin >> a.lop >> a.date >> a.gpa;
    if (a.date[1] == '/')
        a.date = "0" + a.date;
    if (a.date[4] == '/')
        a.date.insert(a.date.begin() + 3, '0');
}

void inThongTinSV(sv &a) {
    cout << "N20DCCN001 " << a.name << ' ' << a.lop << ' ' << a.date << ' ' << fixed << setprecision(2) << a.gpa;
}

int main() {
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}