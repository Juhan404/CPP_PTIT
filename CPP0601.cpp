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
    string ten, lop, date;
    double gpa;
    void nhap() {
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, date);
        cin >> gpa;
    }
    void xuat() {
        cout << "B20DCCN001" << ' ' << ten << ' ' << lop << ' ';
        for (char &x : date)
            if (x == '/')
                x = ' ';
        stringstream ss(date);
        string s;
        vector<string> v;
        while (ss >> s) {
            v.push_back(s);
        }
        v.pop_back();
        for (string x : v) {
            cout << setfill('0') << setw(2) << x << '/';
        }
        cout << s << ' ';
        cout << fixed << setprecision(2) << gpa;
    }
};

int main() {
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}