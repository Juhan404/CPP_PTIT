#include <bits/stdc++.h>
#define MAX 10000001
#define ll long long
#define fastsync()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
const int mod = 1e9 + 7;
using namespace std;

struct mh {
    int ms;
    string name, type;
    double gm, gb, ln;
};

typedef struct mh mh;

void nhap(mh ds[], int n) {
    for (int i = 0; i < n; i++) {
        ds[i].ms = i + 1;
        cin.ignore();
        getline(cin, ds[i].name);
        getline(cin, ds[i].type);
        cin >> ds[i].gm >> ds[i].gb;
        ds[i].ln = ds[i].gb - ds[i].gm;
    }
}

bool cmp(mh x, mh y) {
    return x.ln > y.ln;
}

void in(mh ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << ds[i].ms << ' ' << ds[i].name << ' ' << ds[i].type << ' ' << fixed << setprecision(2) << ds[i].ln << endl;
    }
}

int main() {
    fastsync();
    int t;
    cin >> t;
    mh ds[t];
    nhap(ds, t);
    sort(ds, ds + t, cmp);
    in(ds, t);
    return 0;
}