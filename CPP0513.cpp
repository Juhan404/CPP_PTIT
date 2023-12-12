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
    string name, cl, date;
    double gpa;
};

typedef struct SinhVien sv;

void nhap(sv ds[], int n) {
    for (int i = 0; i < n; i++) {
        cin.ignore();
        ds[i].msv = i + 1;
        getline(cin, ds[i].name);
        getline(cin, ds[i].cl);
        getline(cin, ds[i].date);
        cin >> ds[i].gpa;
    }
}

void in(sv ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "B20DCCN";
        cout << setfill('0') << setw(3) << ds[i].msv << ' ';
        cout << ds[i].name << ' ' << ds[i].cl << ' ';
        for (char &x : ds[i].date) {
            if (x == '/')
                x = ' ';
        }
        stringstream ss(ds[i].date);
        string s;
        vector<string> v;
        while (ss >> s) {
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
    in(ds, N);
    return 0;
}