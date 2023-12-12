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
    string msv, name, cl;
    double d1, d2, d3;
};

typedef struct SinhVien sv;

void nhap(sv &a) {
    cin.ignore();
    getline(cin, a.msv);
    getline(cin, a.name);
    getline(cin, a.cl);
    cin >> a.d1 >> a.d2 >> a.d3;
}

bool cmp(sv x, sv y) {
    return x.name < y.name;
}

void sap_xep(sv ds[], int n) {
    sort(ds, ds + n, cmp);
}

void in_ds(sv ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ' ' << ds[i].msv << ' ' << ds[i].name << ' ' << ds[i].cl << ' ' << fixed << setprecision(1) << ds[i].d1 << ' ' << fixed << setprecision(1) << ds[i].d2 << ' ' << fixed << setprecision(1) << ds[i].d3 << endl;
    }
}

int main() {
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for (int i = 0; i < n; i++) {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}