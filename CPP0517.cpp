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

bool check = 1;

void nhap(nv &a) {
    if (check) {
        cin.ignore();
        check = 0;
    }
    getline(cin, a.name);
    getline(cin, a.gt);
    getline(cin, a.date);
    getline(cin, a.dc);
    getline(cin, a.mst);
    getline(cin, a.hd);
}

void inds(nv ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << setfill('0') << setw(5) << i + 1;
        cout << ' ';
        cout << ds[i].name << ' ' << ds[i].gt << ' ' << ds[i].date << ' ' << ds[i].dc << ' ' << ds[i].mst << ' ' << ds[i].hd << endl;
    }
}

int main() {
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}