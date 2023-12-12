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
    string name, date, lop;
    double gpa;
};

void nhap(struct SinhVien &A) {
    getline(cin, A.name);
    getline(cin, A.lop);
    getline(cin, A.date);
    cin >> A.gpa;
}

void chuanhoa(string &s) {
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
}

void tach(string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/')
            s[i] = ' ';
    }
}

void in(struct SinhVien A) {
    cout << "B20DCCN001 ";
    stringstream ss(A.name);
    string s;
    while (ss >> s) {
        chuanhoa(s);
        cout << s << ' ';
    }
    cout << A.lop << ' ';
    tach(A.date);
    stringstream sstr(A.date);
    vector<string> v;
    while (sstr >> s) {
        v.push_back(s);
    }
    for (int i = 0; i < v.size() - 1; i++) {
        cout << setw(2) << setfill('0') << v[i] << '/';
    }
    cout << v[v.size() - 1] << ' ';
    cout << fixed << setprecision(2) << A.gpa;
}

int main() {
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}