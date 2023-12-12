#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

struct NhanVien {
    string name, gt, date, dc, mst, hd;
};

typedef struct NhanVien nv;

void nhap(nv &a) {
    getline(cin, a.name);
    getline(cin, a.gt);
    getline(cin, a.date);
    getline(cin, a.dc);
    getline(cin, a.mst);
    getline(cin, a.hd);
}

void in(nv a) {
    cout << "00001" << ' ' << a.name << ' ' << a.gt << ' ' << a.date << ' ' << a.dc << ' ' << a.mst << ' ' << a.hd;
}

int main() {
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}