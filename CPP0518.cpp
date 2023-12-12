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
    int ms;
    string name, d, m, y, mst, gt, dc, date, hd;
};

typedef struct NhanVien nv;

bool check = 1;

int k = 1;

void nhap(nv &a) {
    if (check) {
        cin.ignore();
        check = 0;
    }
    a.ms = k;
    ++k;
    getline(cin, a.name);
    getline(cin, a.gt);
    getline(cin, a.date);
    getline(cin, a.dc);
    getline(cin, a.mst);
    getline(cin, a.hd);
    for (char &x : a.date) {
        if (x == '/')
            x = ' ';
    }
    stringstream ss(a.date);
    string s;
    int u = 1;
    while (ss >> s) {
        if (u == 1) {
            a.m = s;
            ++u;
        }
        else if (u == 2) {
            a.d = s;
            ++u;
        }
        else {
            a.y = s;
        }
    }
}

bool cmp(nv x, nv y) {
    if (x.y != y.y) {
        return x.y < y.y;
    }
    else if (x.m != y.m) {
        return x.m < y.m;
    }
    else
        return x.d < y.d;
}

void sapxep(nv ds[], int n) {
    sort(ds, ds + n, cmp);
}

void inds(nv ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << setfill('0') << setw(5) << ds[i].ms << ' ' << ds[i].name << ' ' << ds[i].gt << ' ' << ds[i].m << '/' << ds[i].d << '/' << ds[i].y << ' ' << ds[i].dc << ' ' << ds[i].mst << ' ' << ds[i].hd << endl;
    }
}

int main() {
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}