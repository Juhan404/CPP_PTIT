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
    int msv;
    string name, lop, date;
    double gpa;
};

typedef struct SinhVien sv;

void nhap(sv ds[], int n) {
    for (int i = 0; i < n; i++) {
        ds[i].msv = i + 1;
        cin.ignore();
        getline(cin, ds[i].name);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].date);
        cin >> ds[i].gpa;
    }
}

bool cmp(sv x, sv y) {
    return x.gpa > y.gpa;
}

void sapxep(sv ds[], int n) {
    stable_sort(ds, ds + n, cmp);
}

void chuanhoa(string &s) {
    for (char &x : s) {
        x = tolower(x);
    }
    s[0] = toupper(s[0]);
}

void in(sv ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "B20DCCN" << setfill('0') << setw(3) << ds[i].msv << ' ';
        stringstream ss(ds[i].name);
        string s;
        while (ss >> s) {
            chuanhoa(s);
            cout << s << ' ';
        }
        cout << ds[i].lop << ' ';
        for (char &x : ds[i].date) {
            if (x == '/')
                x = ' ';
        }
        stringstream ss2(ds[i].date);
        vector<string> v;
        while (ss2 >> s) {
            v.push_back(s);
        }
        for (int i = 0; i < v.size() - 1; i++) {
            cout << setfill('0') << setw(2) << v[i] << '/';
        }
        cout << v[v.size() - 1] << ' ' << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main() {
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}